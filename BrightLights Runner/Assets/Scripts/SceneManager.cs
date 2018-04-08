using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityEditor.SceneManagement; //this is part of why it breaks

public class SceneManager : MonoBehaviour {

    public string sceneName;

    public void RestartGame()
    {
        FindObjectOfType<GameManager>().Reset();
    }

    public void LoadScene()
    {
        Application.LoadLevel(sceneName); //deprecated but the new version breks everything, fix if we have time
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
