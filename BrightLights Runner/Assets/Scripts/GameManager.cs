﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour {

    public Transform GroundGenerator, ObstacleGenerator;
    public PlayerController thePlayer;
    public ObstacleGenerator theObstacle;
    public CameraController theCamera;
    public SceneLoader theSceneLoader; //changed from SceneManager as it clashed with Unity class
    public ColorController theColor;
    public LifeController theLives;
    public Text hitText, finalTimeText;

    private Vector3 groundStartPoint, obstacleStartPoint;
    private Vector3 playerStartPoint;
    private GroundDestroyer[] groundList;
    private ObstacleDestroyer[] obstacleList;

    public static int gameOption;

    private void Awake()
    {
        gameOption = UnityEngine.Random.Range(1, 4); // Generates a random number between 1 and 3
        Debug.Log("GameOption Random No " + gameOption);
        theCamera.SetGameOption(gameOption); // Pass the game option to the CameraController

    }

    // Use this for initialization
    void Start () {
        // Enable the Gyroscope
        Input.gyro.enabled = true;
        // Start Location Services
        StartCoroutine(StartLocationServices());

        InputSystem.EnableDevice(LightSensor.current);
        InputSystem.EnableDevice(ProximitySensor.current);

        Application.targetFrameRate = 60; //to fix low fps issue
        groundStartPoint = GroundGenerator.position;
        obstacleStartPoint = ObstacleGenerator.position;
        

        //gameOption = UnityEngine.Random.Range(1, 4); // Generates a random number between 1 and 3
        //Debug.Log("GameOption Random No " + gameOption);
        //theCamera.SetGameOption(gameOption); // Pass the game option to the CameraController

    }
	
	// Update is called once per frame
	void Update () {
        //Debug.Log("GameOption Random No update " + gameOption);
        Color playerColor = thePlayer.playerColour.material.color;

        if ((playerColor == Color.black) || (playerColor == ColorController.blueYellowEnd) || (playerColor == ColorController.redGreenEnd))
        {
            thePlayer.playerColour.material.color = Color.white;

            Debug.Log("Whys is this happening");

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

    public int GetGameOption()
    {
        return gameOption;
    }

    private IEnumerator StartLocationServices()
    {
        if (!Input.location.isEnabledByUser)
        {
            yield break;
        }

        Input.location.Start();

        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        if (maxWait <= 0)
        {
            Debug.Log("Timed out");
            yield break;
        }

        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
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
        theCamera.RestartBrightness();//gameOption);
        //theCamera.ChangePlayerColour();

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
        //Debug.Log("aaaaa");
        //// Get the device model, brightness, ambient light, location, and time
        //string deviceModel = SystemInfo.deviceModel;
        //float brightness = Screen.brightness;
        //float ambientLight = LightSensor.current.lightLevel.ReadValue();
        //var proximity = ProximitySensor.current.distance;

        //string location = Input.location.lastData.latitude + ", " + Input.location.lastData.longitude;
        //string timestamp = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
        //Vector3 gyroData = Input.gyro.rotationRateUnbiased;

        ////convert to strings
        //string partID = ParticipantIDController.participantID; //global
        //string hitCount = thePlayer.hitCounter.ToString();
        //string bulbCount = thePlayer.bulbCounter.ToString();
        //string lifeCount = thePlayer.lifeCounter.ToString();
        //string playTime = thePlayer.timer.ToString("F2") + "s";
        //string firstColour = ColorUtility.ToHtmlStringRGB(thePlayer.background1); //gives hex codes - easy to convert to RGB
        //string secondColour = ColorUtility.ToHtmlStringRGB(thePlayer.background2);
        //string thirdColour = ColorUtility.ToHtmlStringRGB(thePlayer.background3);
        //string firstTime = thePlayer.time1.ToString("F2") + "s";
        //string secondTime = thePlayer.time2.ToString("F2") + "s";
        //string thirdTime = thePlayer.time3.ToString("F2") + "s";

        string deviceModel = SystemInfo.deviceModel;
        Debug.Log("Device Model: " + deviceModel);

        float brightness = Screen.brightness;
        Debug.Log("Brightness: " + brightness);

        float ambientLight = 0;
        if (LightSensor.current != null)
        {
            ambientLight = LightSensor.current.lightLevel.ReadValue();
        }
        else
        {
            Debug.LogWarning("LightSensor is not available on this device.");
        }
        Debug.Log("Ambient Light: " + ambientLight);

       // var proximity = ProximitySensor.current.distance;
       // Debug.Log("Proximity: " + proximity);

        string location = Input.location.lastData.latitude + ", " + Input.location.lastData.longitude;
        Debug.Log("Location: " + location);

        string timestamp = System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
        Debug.Log("Timestamp: " + timestamp);

        Vector3 gyroData = Input.gyro.rotationRateUnbiased;
        Debug.Log("Gyroscope Data: " + gyroData);

        // convert to strings
        string partID = ParticipantIDController.participantID; //global
        Debug.Log("Participant ID: " + partID);

        string hitCount = thePlayer.hitCounter.ToString();
        Debug.Log("Obstacles Hit: " + hitCount);

        string bulbCount = thePlayer.bulbCounter.ToString();
        Debug.Log("Lightbulbs Remaining: " + bulbCount);

        string lifeCount = thePlayer.lifeCounter.ToString();
        Debug.Log("Lives Remaining: " + lifeCount);

        string playTime = thePlayer.timer.ToString("F2") + "s";
        Debug.Log("Run Length: " + playTime);

        string firstColour = ColorUtility.ToHtmlStringRGB(thePlayer.background1); //gives hex codes - easy to convert to RGB
        string secondColour = ColorUtility.ToHtmlStringRGB(thePlayer.background2);
        string thirdColour = ColorUtility.ToHtmlStringRGB(thePlayer.background3);
        Debug.Log("First Colour: " + firstColour);
        Debug.Log("Second Colour: " + secondColour);
        Debug.Log("Third Colour: " + thirdColour);

        string firstTime = thePlayer.time1.ToString("F2") + "s";
        string secondTime = thePlayer.time2.ToString("F2") + "s";
        string thirdTime = thePlayer.time3.ToString("F2") + "s";
        Debug.Log("First Time: " + firstTime);
        Debug.Log("Second Time: " + secondTime);
        Debug.Log("Third Time: " + thirdTime);

        PlayerData playerData = new PlayerData
        {
            deviceModel = deviceModel,
            brightness = brightness,
            ambientLight = ambientLight,
            location = location,
            timestamp = timestamp,
            gyroData = gyroData,
            partID = partID,
            hitCount = hitCount,
            bulbCount = bulbCount,
            lifeCount = lifeCount,
            playTime = playTime,
            firstTime = firstTime,
            firstColour = firstColour,
            secondTime = secondTime,
            secondColour = secondColour,
            thirdTime = thirdTime,
            thirdColour = thirdColour
        };

        // using (StreamWriter writer = File.AppendText(Application.persistentDataPath + "\\" + "BrightLightsData.txt"))
        string filePath = Path.Combine(Application.persistentDataPath, "BrightLightsData.json");

       // string formattedData = FormatData(deviceModel, brightness, ambientLight, location, timestamp, gyroData, partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour);

        //File.AppendAllText(filePath, formattedData);

        Debug.Log("Saving data to: " + filePath);

        Debug.Log("Saving data to: " + filePath);

        string jsonData = JsonUtility.ToJson(playerData, true);
        //Debug.Log("Formatted data to save: " + formattedData);

        try
        {
            //using (FileStream fileStream = new FileStream(filePath, FileMode.Append, FileAccess.Write, FileShare.None))
            //{
            //    using (StreamWriter writer = new StreamWriter(fileStream))
            //    {
            //        writer.Write(formattedData);
            //    }
            //}
            File.AppendAllText(filePath, jsonData + "\n");
        }
        catch (Exception e)
        {
            Debug.LogError("Error while writing to file: " + e.Message);
        }

        //using (StreamWriter writer = new StreamWriter(filePath, true))
        //{
        //    WriteData(deviceModel, brightness, ambientLight, location, timestamp, gyroData, partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour, writer);
        //    writer.Flush();
        //}

        Debug.Log("Data saved successfully");

        // string filePath = Path.Combine(Application.persistentDataPath, "BrightLightsData.txt");
        //if (!File.Exists(filePath))
        //{
        //    File.WriteAllText(filePath, ""); // Create an empty file
        //}

        //StringBuilder sb = new StringBuilder();
        //using (StreamWriter writer = File.AppendText(filePath))
        //{
        //    WriteData(deviceModel, brightness, ambientLight, location, timestamp, gyroData, partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour, writer);
        //    writer.Flush();
        //}
            //{
            //    WriteData(deviceModel, brightness, ambientLight, location, timestamp, gyroData, partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour, writer);
            //}
            //File.AppendAllText(filePath, sb.ToString());

            // Prepare the data to be written in the text file
            // string dataToWrite = WriteData(deviceModel, brightness, ambientLight, location, timestamp, gyroData, partID, hitCount, bulbCount, lifeCount, playTime, firstTime, firstColour, secondTime, secondColour, thirdTime, thirdColour);

            //// Check if the file exists
            //if (!File.Exists(filePath))
            //{
            //    // Create the file and add a header
            //    string header = "Device Model, Brightness, Ambient Light, Location, Timestamp, Gyroscope Data, Participant ID, Obstacles Hit, Lightbulbs Remaining, Lives Remaining, Run Length, First Time, First Colour, Second Time, Second Colour, Third Time, Third Colour";
            //    File.WriteAllText(filePath, header + Environment.NewLine);
            //}

            //// Append the data to the file
            //File.AppendAllText(filePath, dataToWrite + Environment.NewLine);

            Handheld.Vibrate();


    }

    private string FormatData(string deviceModel, float brightness, float ambientLight, string location, string timestamp, Vector3 gyroData, string partID, string hitCount, string bulbCount, string lifeCount, string playTime, string firstTime, string firstColour, string secondTime, string secondColour, string thirdTime, string thirdColour)
    {
        StringBuilder sb = new StringBuilder();

        sb.AppendLine("Device Model: " + deviceModel);
        sb.AppendLine("Brightness: " + brightness);
        sb.AppendLine("Ambient Light: " + ambientLight);
        sb.AppendLine("Location: " + location);
        sb.AppendLine("Timestamp: " + timestamp);
        sb.AppendLine("Gyroscope Data: " + gyroData);

        sb.AppendLine("Participant ID: " + partID);
        sb.AppendLine("Obstacles Hit: " + hitCount);
        sb.AppendLine("Lightbulbs Remaining: " + bulbCount);
        sb.AppendLine("Lives Remaining: " + lifeCount);
        sb.AppendLine("Run Length: " + playTime);
        sb.AppendLine("Time and Background Colour when Lightbulb Pressed:");
        sb.AppendLine("First: " + firstTime + ", " + firstColour);
        sb.AppendLine("Second: " + secondTime + ", " + secondColour);
        sb.AppendLine("Third: " + thirdTime + ", " + thirdColour);
        sb.AppendLine();
        sb.AppendLine("----------------------");
        sb.AppendLine();

        return sb.ToString();
    }

    public static string WriteData(string deviceModel, float brightness, float ambientLight, string location, string timestamp, Vector3 gyroData, string partID, string hitCount, string bulbCount, string lifeCount, string playTime, string firstTime, string firstColour, string secondTime, string secondColour, string thirdTime, string thirdColour)
    {
        return $"Device Model: {deviceModel}, Brightness: {brightness}, Ambient Light: {ambientLight}, Location: {location}, Timestamp: {timestamp}, Gyroscope Data: {gyroData}, Participant ID: {partID}, Obstacles Hit: {hitCount}, Lightbulbs Remaining: {bulbCount}, Lives Remaining: {lifeCount}, Run Length: {playTime}, First: {firstTime} ({firstColour}), Second: {secondTime} ({secondColour}), Third: {thirdTime} ({thirdColour})";
    }


    //write relevant data to file
    public static void WriteData(string deviceModel, float brightness, float ambientLight, string location, string timestamp, Vector3 gyroData, string partID, string hitCount, string bulbCount, string lifeCount, string playTime, string firstTime, string firstColour, string secondTime, string secondColour, string thirdTime, string thirdColour, TextWriter writer)
    {
        List<string> lines = new List<string>
    {
        "Device Model: " + deviceModel,
        "Brightness: " + brightness,
        "Ambient Light: " + ambientLight,
        "Location: " + location,
        "Timestamp: " + timestamp,
        "Gyroscope Data: " + gyroData,
        "Participant ID: " + partID,
        "Obstacles Hit: " + hitCount,
        "Lightbulbs Remaining: " + bulbCount,
        "Lives Remaining: " + lifeCount,
        "Run Length: " + playTime,
        "Time and Background Colour when Lightbulb Pressed:",
        "First: " + firstTime + ", " + firstColour,
        "Second: " + secondTime + ", " + secondColour,
        "Third: " + thirdTime + ", " + thirdColour,
        "",
        "----------------------",
        ""
    };

        foreach (string line in lines)
        {
            Debug.Log("Writing line: " + line);
            writer.WriteLine(line);
        }

        writer.WriteLine("Device Model: " + deviceModel);
        writer.WriteLine("Brightness: " + brightness);
        writer.WriteLine("Ambient Light: " + ambientLight);
        writer.WriteLine("Location: " + location);
        writer.WriteLine("Timestamp: " + timestamp);
        writer.WriteLine("Gyroscope Data: " + gyroData);

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
