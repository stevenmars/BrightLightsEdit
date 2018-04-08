using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.SceneManagement;

public class SceneManager : MonoBehaviour {

    public string sceneName;

    public void RestartGame()
    {
        FindObjectOfType<GameManager>().Reset();
    }

    public void LoadScene()
    {
        EditorSceneManager.LoadScene(sceneName);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
