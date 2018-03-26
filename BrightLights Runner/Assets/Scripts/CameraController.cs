using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public PlayerController squarePlayer;

    private Vector3 lastSquarePosition;
    private float distanceToMove, brightTime, t;
    Camera cam;

	void Awake() {
        squarePlayer = FindObjectOfType<PlayerController>();
        lastSquarePosition = squarePlayer.transform.position;
        cam = GetComponent<Camera>();
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = Color.white;
        brightTime = 0;
        t = 0;
    }
	
    //camera tracks player movement on x axis
	void Update()
    {
        //update the time
        brightTime += Time.deltaTime;

        distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
        transform.position = new Vector3(transform.position.x + distanceToMove, transform.position.y, transform.position.z);
        lastSquarePosition = squarePlayer.transform.position;

        //fade the background colour from white to black
        t = Mathf.Lerp(brightTime, 3, 0)/30;
        cam.backgroundColor = Color.Lerp(Color.white, Color.black, t);
    }

    public void ChangePlayerColour()
    {
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
    
    public void RestartBrightness()
    {
        brightTime = 0;
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
}
