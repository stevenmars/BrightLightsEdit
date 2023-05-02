using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WelcomeDisplay : MonoBehaviour
{
    public GameObject welcomeDisplay;
    public Button agreeButton;
    public Button declineButton;
    // Start is called before the first frame update
    void Start()
    {
        ResetConsentPage(); // Only for testing
        Debug.Log("start method");

        // Check if the consent page has been shown before
        if (!PlayerPrefs.HasKey("ConsentShown"))
        {
            // Show the consent page
            welcomeDisplay.SetActive(true);
            Debug.Log("display shown");
        }

        agreeButton.onClick.AddListener(OnConsentGiven);
        declineButton.onClick.AddListener(OnConsentDenied);
    }

    void OnConsentGiven()
    {
        //playerDataForm.SetActive(true);
        CloseDisplay();
    }

    void OnConsentDenied()
    {
        CloseDisplay();
    }

    void ResetConsentPage()
    {
        PlayerPrefs.DeleteKey("ConsentShown");
    }

    void CloseDisplay()
    {
        // User has given consent (clicked "Agree" or "Disagree")
        PlayerPrefs.SetInt("ConsentShown", 1);
        PlayerPrefs.Save();
        welcomeDisplay.SetActive(false);
    }
    

    // Update is called once per frame
    void Update()
    {
        
    }
}
