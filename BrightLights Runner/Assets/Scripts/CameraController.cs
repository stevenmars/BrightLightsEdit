using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public PlayerController squarePlayer;
    public Transform cameraTransform;
    public float shakeTime, shakeIntensity, shakeCalmDown;

    private Camera cam;
    private Vector3 lastSquarePosition, savedPos;
    private float distanceToMove, brightTime, t, savedPosx, savedPosy, savedPosz;

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
	
    //camera tracks player movement on x axis
	void Update()
    {
        //update the time
        brightTime += Time.deltaTime;

        distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
        transform.position = new Vector3(transform.position.x + distanceToMove, 0, transform.position.z);
        lastSquarePosition = squarePlayer.transform.position;

        //screenshake effect
        if (shakeTime > 0)
        {
            distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
            transform.position = new Vector3(transform.position.x + distanceToMove, transform.position.y + Random.Range(-1.0f, 1.0f) * shakeIntensity, transform.position.z);
            shakeTime -= Time.deltaTime * shakeCalmDown;
            lastSquarePosition = squarePlayer.transform.position;
        }

        //fade the background colour from white to black
        t = Mathf.Lerp(brightTime, 3, 0)/30;
        cam.backgroundColor = Color.Lerp(Color.white, Color.black, t);
    }

    // change player colour based on time elapsed since game start or lightbulb press
    public void ChangePlayerColour()
    {
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
    
    // reset brightness of player and background to white by resetting "time"
    public void RestartBrightness()
    {
        brightTime = 0;
        t = Mathf.Lerp(brightTime, 3, 0) / 30;
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
}
