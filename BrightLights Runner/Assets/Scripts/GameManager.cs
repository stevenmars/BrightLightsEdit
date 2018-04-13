using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

    public Transform GroundGenerator, ObstacleGenerator;
    public PlayerController thePlayer;
    public ObstacleGenerator theObstacle;
    public CameraController theCamera;
    public SceneManager theSceneManager;
    public LifeController theLives;
    public Text hitText, finalTimeText;

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
            finalTimeText.text = "You made it " + thePlayer.timer.ToString("F2") +"s";

            if (thePlayer.hitCounter == 1)
            {
                hitText.text = thePlayer.hitCounter.ToString() + " Obstacle Hit";
            }
            else
            {
                hitText.text = thePlayer.hitCounter.ToString() + " Obstacles Hit";
            }

            thePlayer.gameObject.SetActive(false);
            theSceneManager.gameObject.SetActive(true);
        }
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

        //reset hitcounter and lives
        thePlayer.hitCounter = 0;
        thePlayer.lifeCounter = 3;
        thePlayer.SetLifeText();

        //reset timer
        thePlayer.timer = 0;

        //hide lifecounter
        thePlayer.lifeText.gameObject.SetActive(false);
        theLives.gameObject.SetActive(false);

        //show the player again
        thePlayer.gameObject.SetActive(true);
    }

    //restarts game
    /*public IEnumerator RestartCo()
    {
        
        yield return new WaitForSeconds(0.5f);

        
    }*/
}
