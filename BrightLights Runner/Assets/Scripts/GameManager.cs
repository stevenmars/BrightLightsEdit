using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

    public Transform GroundGenerator, ObstacleGenerator;
    public PlayerController thePlayer;
    public ObstacleGenerator theObstacle;
    public CameraController theCamera;
    public SceneLoader theSceneLoader; //changed from SceneManager as it clashed with Unity class
    public LifeController theLives;
    public Text hitText, finalTimeText;

    private Vector3 groundStartPoint, obstacleStartPoint;
    private Vector3 playerStartPoint;
    private GroundDestroyer[] groundList;
    private ObstacleDestroyer[] obstacleList;

    // Use this for initialization
    void Start () {
        Application.targetFrameRate = 60; //to fix low fps issue
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
            theSceneLoader.gameObject.SetActive(true);
        }
    }

    public void Reset()
    {
        theSceneLoader.gameObject.SetActive(false);

        //delete obstacles and ground from previous run
        groundList = FindObjectsOfType<GroundDestroyer>();
        obstacleList = FindObjectsOfType<ObstacleDestroyer>();
        for (int i = 0; i < groundList.Length; i++)
        {
            //Destroy(groundList[i].gameObject);
            groundList[i].gameObject.SetActive(false);
        }
        for (int j = 0; j < obstacleList.Length; j++)
        {
            //Destroy(obstacleList[j].gameObject);
            obstacleList[j].gameObject.SetActive(false);
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

    public void SavePlayersData()
    {
        //convert to strings
        string partID = ParticipantIDController.participantID; //global
        string hitCount = thePlayer.hitCounter.ToString();
        string bulbCount = thePlayer.bulbCounter.ToString();
        string lifeCount = thePlayer.lifeCounter.ToString();
        string playTime = thePlayer.timer.ToString("F2") + "s";
        string firstColour = ColorUtility.ToHtmlStringRGB(thePlayer.background1); //gives hex codes - easy to convert to RGB
        string secondColour = ColorUtility.ToHtmlStringRGB(thePlayer.background2);
        string thirdColour = ColorUtility.ToHtmlStringRGB(thePlayer.background3);
        string firstTime = thePlayer.time1.ToString("F2") + "s";
        string secondTime = thePlayer.time2.ToString("F2") + "s";
        string thirdTime = thePlayer.time3.ToString("F2") + "s";

        using (StreamWriter writer = File.AppendText(Application.persistentDataPath + "\\" + "BrightLightsData.txt"))
        {
            WriteData(partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour, writer);
        }

        Handheld.Vibrate();
    }
    
    //write relevant data to file
    public static void WriteData(string partID, string hitCount, string bulbCount, string lifeCount, string playTime, string firstTime, string firstColour, string secondTime, string secondColour, string thirdTime, string thirdColour, TextWriter writer)
    {
        writer.WriteLine("Participant ID: " + partID);
        writer.WriteLine("Obstacles Hit: " + hitCount);
        writer.WriteLine("Lightbulbs Remaining: " + bulbCount);
        writer.WriteLine("Lives Remaining: " + lifeCount);
        writer.WriteLine("Run Length: " + playTime);
        writer.WriteLine("Time and Background Colour when Lightbulb Pressed:");
        writer.WriteLine("First: " + firstTime + ", " + firstColour);
        writer.WriteLine("Second: " + secondTime + ", " + secondColour);
        writer.WriteLine("Third: " + thirdTime + ", " + thirdColour);
        writer.WriteLine();
        writer.WriteLine("----------------------");
        writer.WriteLine();
    }
}
