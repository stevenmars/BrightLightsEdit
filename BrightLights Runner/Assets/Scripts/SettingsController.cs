using Firebase.Database;
using Firebase.Functions;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsController : MonoBehaviour
{
    public Button settingsButton;
    public Button exitSettingsButton;
    public Button deleteDataButton;
    public GameObject settingsPanel;
    //public GameManager gameManager;

    // Add a reference to the FirebaseAuthManager script
    // public FirebaseAuthManager authManager;

   // public FirebaseAuthManager authManager;

    void Start()
    {
        settingsButton.onClick.AddListener(ToggleSettingsPanel);
        exitSettingsButton.onClick.AddListener(ClosePanel);
        deleteDataButton.onClick.AddListener(DeleteData);

       // FirebaseAuthManager.OnInitialized += OnFirebaseInitialized;
       // deleteDataButton.interactable = false; // Disable the button initially

       // authManager = FindObjectOfType<FirebaseAuthManager>();

        //if (authManager.IsFirebaseInitialized())
        //{
        //    deleteDataButton.interactable = true;
        //}
        //else
        //{
        //    FirebaseAuthManager.OnInitialized += OnFirebaseInitialized;
        //    deleteDataButton.interactable = false;
        //}

        settingsPanel.SetActive(false);

        

        // Initialize the FirebaseAuthManager reference
        // authManager = FindObjectOfType<FirebaseAuthManager>();
        Debug.Log("SettingsController started");
    }



    void ToggleSettingsPanel()
    {
        settingsPanel.SetActive(true);
    }

    void DeleteData()
    {

        if (FirebaseAuthManager.auth == null || FirebaseAuthManager.auth.CurrentUser == null)
        {
            Debug.LogError("Error deleting user data: FirebaseAuthManager.auth or FirebaseAuthManager.auth.CurrentUser is null");
            return;
        }

        try
        {
            DeleteUserData();
        }
        catch (Exception e)
        {
            Debug.LogError($"Error deleting user data: {e.Message}\n{e.StackTrace}");
        }


    }

    public async void DeleteUserData()
    {
        string userId = FirebaseAuthManager.auth.CurrentUser.UserId; // Get user ID from the authentication system you implemented

        try
        {
            try
            {
                

                Debug.Log($"Attempting to delete user data for user ID: {userId}");

                // Delete data from Firebase Realtime Database
                DatabaseReference userRef = FirebaseDatabase.DefaultInstance.GetReference("players").Child(userId);
                await userRef.RemoveValueAsync();

                Debug.Log($"Successfully deleted user data from Firebase Realtime Database for user ID: {userId}");
            }
            catch (Exception e)
            {
                Debug.LogError($"Error deleting user data from Firebase Realtime Database: {e.Message}\n{e.StackTrace}");
            }
            
          

            // Delete data from BigQuery using the Cloud Function
            FirebaseFunctions functions = FirebaseFunctions.DefaultInstance;
            try
            {
                await functions.GetHttpsCallable("deleteUserFromBigQuery").CallAsync(new Dictionary<string, object> { { "userId", userId } });
            }
            catch (Firebase.Functions.FunctionsException e)
            {
                Debug.LogError($"Error deleting user data from BigQuery: {e.Message}\n{e.StackTrace}\n");
            }
            
        }
        catch (Exception e)
        {
            Debug.LogError($"Error deleting user data: {e.Message}");
        }


    }

    void ClosePanel()
    {
        settingsPanel.SetActive(false);
    }
}
