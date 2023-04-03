using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; //updated from deprecated version

public class SceneLoader : MonoBehaviour {

    public string sceneName;

    public void RestartGame()
    {
        FindObjectOfType<GameManager>().Reset();
    }

    public void LoadScene()
    {
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single); //updated, old version sued deprecated application.loadlevel.
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}