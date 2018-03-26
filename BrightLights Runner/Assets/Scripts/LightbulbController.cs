using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightbulbController : MonoBehaviour {

    public CameraController theCamera;
    public PlayerController thePlayer;

    private int lightCount;

	// Use this for initialization
	void Awake () {
        lightCount = 0;
	}

    // If the player presses the lightbulb, reset the background and player brightness
    void Update()
    {
        
    }
}
