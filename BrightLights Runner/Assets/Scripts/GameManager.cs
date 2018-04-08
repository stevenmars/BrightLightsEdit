using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

    public Transform GroundGenerator, ObstacleGenerator;
    public PlayerController thePlayer;
    public ObstacleGenerator theObstacle;
    public CameraController theCamera;
    public SceneManager theSceneManager;

    private Vector3 groundStartPoint, obstacleStartPoint;
    private Vector3 playerStartPoint;
    private GroundDestroyer[] groundList;
    private ObstacleDestroyer[] obstacleList;

    // Use this for initialization
    void Start () {
        groundStartPoint = GroundGenerator.position;
        obstacleStartPoint = ObstacleGenerator.position;
	}
	
	// Update is called once per frame
	void Update () {
        if (thePlayer.playerColour.material.color == Color.black)
        {
            //print("GAME OVER");
            thePlayer.gameObject.SetActive(false);

            theSceneManager.gameObject.SetActive(true);
        }
    }

    //calls co-routine for restarting game
    public void Restart()
    {
        //StartCoroutine("RestartCo");
        
    }

    public void Reset()
    {
        theSceneManager.gameObject.SetActive(false);

        //delete obstacles and ground from previous run
        groundList = FindObjectsOfType<GroundDestroyer>();
        obstacleList = FindObjectsOfType<ObstacleDestroyer>();
        for (int i = 0; i < groundList.Length; i++)
        {
            Destroy(groundList[i].gameObject);
        }
        for (int j = 0; j < obstacleList.Length; j++)
        {
            Destroy(obstacleList[j].gameObject);
        }

        //reset positions
        thePlayer.transform.position = playerStartPoint;
        GroundGenerator.position = groundStartPoint;
        ObstacleGenerator.position = obstacleStartPoint;

        //reset player and background brightness
        theCamera.RestartBrightness();
        theCamera.ChangePlayerColour();

        //reset lightbulbs
        thePlayer.bulbCounter = 3;
        thePlayer.SetBulbText();

        //show the player again
        thePlayer.gameObject.SetActive(true);
    }

    //restarts game
    /*public IEnumerator RestartCo()
    {
        
        yield return new WaitForSeconds(0.5f);

        
    }*/
}
