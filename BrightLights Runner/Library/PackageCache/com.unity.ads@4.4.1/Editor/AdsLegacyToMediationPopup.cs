#if UNITY_2019_1_OR_NEWER && UNITY_EDITOR
using UnityEditor.PackageManager.Requests;
using UnityEditor.PackageManager;
using UnityEditor;

namespace UnityEngine.Advertisements.Editor
{
    [InitializeOnLoad]
    public class AdsLegacyToMediationPopup
    {
        const string DIALOG_TITLE_TEXT = "Advertisement Legacy package will soon be unsupported.";
        const string DIALOG_DESCRIPTION_TEXT = "If you are installing this package for the first time please use Advertisement with Mediation instead to ensure long term Unity Ads support.";
        const string DIALOG_MEDIATION_BTN_TEXT = "Install new package";
        const string DIALOG_LEGACY_BTN_TEXT = "Use legacy package";
        const string DIALOG_CANCEL_BTN_TEXT = "Cancel";

        const string HAS_SHOWN_KEY = "MediationDialogShownInt";
        const string USE_LEGACY_KEY = "MediationDialogUseLegacy";

        const string MEDIATION_PACKAGE = "com.unity.services.mediation";
        const string ADS_PACKAGE = "com.unity.ads";

        static bool hasDialogBeenShown = false;
        static bool useLegacy = false;
        static bool shouldInstallMediation = false;
        static bool mediationPackageInstalled = false;

        static RemoveRequest RemoveRequest;
        static AddRequest AddRequest;
        static ListRequest PackageListRequest;

        [InitializeOnLoadMethod]
        static void CheckForMediation()
        {
            if (Application.isBatchMode) return;
            if (mediationPackageInstalled) return;
            PackageListRequest = Client.List();
            EditorApplication.update += ListProgress;
        }
        
        static void ShowDialog()
        {
            if (!EditorPrefs.HasKey(HAS_SHOWN_KEY))
            {
                hasDialogBeenShown = false;
                EditorPrefs.SetBool(HAS_SHOWN_KEY, hasDialogBeenShown);
            }
            if (!EditorPrefs.HasKey(USE_LEGACY_KEY))
            {
                useLegacy = false;
                EditorPrefs.SetBool(USE_LEGACY_KEY, useLegacy);
            }

            hasDialogBeenShown = EditorPrefs.GetBool(HAS_SHOWN_KEY);
            useLegacy = EditorPrefs.GetBool(USE_LEGACY_KEY);



            //if mediation already installed or we already clicked button to install mediation or chose to use legacy do not show dialog
            if (shouldInstallMediation || useLegacy || mediationPackageInstalled) return;

            //show 3 option dialog window
            int option = EditorUtility.DisplayDialogComplex(DIALOG_TITLE_TEXT, DIALOG_DESCRIPTION_TEXT,
                DIALOG_MEDIATION_BTN_TEXT, DIALOG_LEGACY_BTN_TEXT, DIALOG_CANCEL_BTN_TEXT);

            switch (option)
            {
                //Mediation
                case 0:
                    RemoveAdsPackage();
                    shouldInstallMediation = true;
                    hasDialogBeenShown = true;
                    EditorPrefs.SetBool(HAS_SHOWN_KEY, hasDialogBeenShown);
                    break;
                // Legacy
                case 1:
                    useLegacy = true;
                    hasDialogBeenShown = true;
                    EditorPrefs.SetBool(HAS_SHOWN_KEY, hasDialogBeenShown);
                    EditorPrefs.SetBool(USE_LEGACY_KEY, useLegacy);
                    break;
                // Cancel
                case 2:
                    break;
                default:
                    Debug.LogError("Unrecognized option.");
                    break;
            }
        }

        static void InstallMediationPackage()
        {
            AddRequest = Client.Add(MEDIATION_PACKAGE);
            EditorApplication.update += AddProgress;
        }
        static void RemoveAdsPackage()
        {
            RemoveRequest = Client.Remove(ADS_PACKAGE);
            EditorApplication.update += RemoveProgress;
        }

        static void RemoveProgress()
        {
            if (!RemoveRequest.IsCompleted) return;
            if (RemoveRequest.Status == StatusCode.Success) Debug.Log("Removed: " + RemoveRequest.PackageIdOrName);
            else if (RemoveRequest.Status >= StatusCode.Failure) Debug.Log(RemoveRequest.Error.message);
            if (shouldInstallMediation) InstallMediationPackage();
            EditorApplication.update -= RemoveProgress;
        }

        static void AddProgress()
        {
            if (!AddRequest.IsCompleted) return;
            if (AddRequest.Status == StatusCode.Success) Debug.Log("Added: " + AddRequest.Result.name);
            else if (AddRequest.Status >= StatusCode.Failure) Debug.Log(AddRequest.Error.message);

            EditorApplication.update -= AddProgress;
        }

        static void ListProgress()
        {
            if (!PackageListRequest.IsCompleted) return;
            if (PackageListRequest.Status == StatusCode.Success)
            {
                if (IsPackageInstalled(PackageListRequest.Result, MEDIATION_PACKAGE))
                {
                    mediationPackageInstalled = true;
                }
                ShowDialog();
            }
            else if (PackageListRequest.Status == StatusCode.Failure)
            {
                Debug.Log("could not complete check for packages");
            }
            EditorApplication.update -= ListProgress;
        }

        static bool IsPackageInstalled(PackageCollection packages, string packageId)
        {
            foreach (var package in packages)
            {
                if (string.Compare(package.name, packageId) == 0)
                    return true;
                foreach (var dependency in package.dependencies)
                {
                    if (string.Compare(dependency.name, packageId) == 0)
                        return true;
                }
            }
            return false;
        }
    }
}
#endif
