using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public PlayerController squarePlayer;
    public Transform cameraTransform;
    public float shakeTime, shakeIntensity, shakeCalmDown;

    public Camera cam;
    private Vector3 lastSquarePosition, savedPos;
    private float distanceToMove, brightTime, t, savedPosx, savedPosy, savedPosz;

    //public GameManager theGameManager;

    public Color option1StartColor = new Color(0, 0, 1); // RGB(0, 0, 255)
    public Color option1MidColor = new Color(0, 1, 0); // RGB(0, 255, 0)

    public Color option2StartColor = new Color(1, 0, 0); // RGB(255, 0, 0)
    public Color option2MidColor = new Color(0, 1, 1); // RGB(0, 255, 255)

    public Color blackColor = Color.black;
    private Color whiteColor = Color.white;

    private Color currentFadeColor;

    private float colorChangeTimer = 0f;
    private float colorChangeDuration = 30f; // Duration for the first color change
    private float fadeToBlackDuration = 30f; // Duration for the second color change

    private int gameOption;
    // int gameOption = GameManager.GetGameOption();
    //private Color playerColor;
    

    void Awake() {
        squarePlayer = FindObjectOfType<PlayerController>();
        lastSquarePosition = squarePlayer.transform.position;
        cam = GetComponent<Camera>();
        cameraTransform = GetComponent<Transform>();
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = Color.white;
        brightTime = 0;
        t = 0;
        shakeTime = 0.0f;
        shakeIntensity = 0.2f;
        shakeCalmDown = 2.0f;

        





    }

    void Start()
    {
        // int gameOption = GameManager.GetGameOption();
        //gameOption = FindObjectOfType<GameManager>().GetGameOption();
        gameOption = GameManager.gameOption;

       // Debug.Log("Camera Controlle game option start " + gameOption);
        // ...
        // Set the default fade color based on the game option
        if (gameOption == 1)
        {
            currentFadeColor = option1StartColor;
        }
        else if (gameOption == 2)
        {
            currentFadeColor = option2StartColor;
        }
        else
        {
            currentFadeColor = Color.white;
        }
    }

    //camera tracks player movement on x axis
    void Update()
    {
        //update the time
        brightTime += Time.deltaTime;

        distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
        transform.position = new Vector3(transform.position.x + distanceToMove, 0, transform.position.z);
        lastSquarePosition = squarePlayer.transform.position;

        //playerColor = squarePlayer.playerColour.material.color;



        //screenshake effect
        if (shakeTime > 0)
        {
            distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
            transform.position = new Vector3(transform.position.x + distanceToMove, transform.position.y + Random.Range(-1.0f, 1.0f) * shakeIntensity, transform.position.z);
            shakeTime -= Time.deltaTime * shakeCalmDown;
            lastSquarePosition = squarePlayer.transform.position;
        }

        

       // Debug.Log("Camera Controlle game option update method " + gameOption);

        t = Mathf.Lerp(brightTime, 3, 0) / 30;

        if (gameOption == 1)
        {
            colorChangeTimer += Time.deltaTime;
            if (colorChangeTimer <= colorChangeDuration)
            {
                cam.backgroundColor = Color.Lerp(option1StartColor, option1MidColor, colorChangeTimer / colorChangeDuration);
                currentFadeColor = cam.backgroundColor;
            }
            else
            {
                //t = Mathf.Lerp(brightTime, 3, 0) / 30;
                cam.backgroundColor = Color.Lerp(currentFadeColor, ColorController.redGreenEnd, (colorChangeTimer - colorChangeDuration) / fadeToBlackDuration);
            }
        }
        else if (gameOption == 2)
        {
            colorChangeTimer += Time.deltaTime;
            if (colorChangeTimer <= colorChangeDuration)
            {
                cam.backgroundColor = Color.Lerp(option2StartColor, option2MidColor, colorChangeTimer / colorChangeDuration);
                currentFadeColor = cam.backgroundColor;
            }
            else
            {
                //t = Mathf.Lerp(brightTime, 3, 0) / 30;
                cam.backgroundColor = Color.Lerp(currentFadeColor, ColorController.blueYellowEnd, (colorChangeTimer - colorChangeDuration) / fadeToBlackDuration);
            }
        }
        else
        {
            colorChangeTimer += Time.deltaTime;
           // t = Mathf.Lerp(brightTime, 3, 0) / 30;
            //cam.backgroundColor = Color.Lerp(whiteColor, blackColor, colorChangeTimer / fadeToBlackDuration);
            cam.backgroundColor = Color.Lerp(Color.white, Color.black, t);
        }

    }

    public void SetGameOption(int option)
    {
        gameOption = option;
    }

    //fade the background colour from white to black
    //t = Mathf.Lerp(brightTime, 3, 0)/30;
    //cam.backgroundColor = Color.Lerp(Color.white, Color.black, t);

    //Color targetColor = Color.Lerp(Color.white, Color.black, t);

    // Apply the deuteranomaly color transformation
    //Color deuteranomalyColor = DeuteranomalyColorTransform(targetColor);

    // Set the background color to the transformed color
    //cam.backgroundColor = deuteranomalyColor;

    // change player colour based on time elapsed since game start or lightbulb press
    public void ChangePlayerColour()
    {
        //  squarePlayer.playerColour.material.color = cam.backgroundColor; //Color.Lerp(Color.white, Color.black, t);
        squarePlayer.playerColour.material.color = cam.backgroundColor;
    }
    
    // reset brightness of player and background to white by resetting "time"
    public void RestartBrightness()//int gameOption)
    {
        brightTime = 0;

        colorChangeTimer = 0;

        Debug.Log(squarePlayer.playerColour.material.color);
        Debug.Log("game option" + gameOption);

        t = Mathf.Lerp(brightTime, 3, 0) / 30;
        if(gameOption == 1)
        {
            squarePlayer.playerColour.material.color = Color.Lerp(option1StartColor, option1MidColor, colorChangeTimer / colorChangeDuration);
            Debug.Log(squarePlayer.playerColour.material.color);
        }
        else if (gameOption ==2)
        {
            squarePlayer.playerColour.material.color = Color.Lerp(option2StartColor, option2MidColor, colorChangeTimer / colorChangeDuration);
            Debug.Log(squarePlayer.playerColour.material.color);
        }
        else
        {
            squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
            Debug.Log(squarePlayer.playerColour.material.color);
        }
        //squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
}
