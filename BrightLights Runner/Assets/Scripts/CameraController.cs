using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public PlayerController squarePlayer;

    private Vector3 lastSquarePosition;
    private float distanceToMove;

	void Awake() {
        squarePlayer = FindObjectOfType<PlayerController>();
        lastSquarePosition = squarePlayer.transform.position;
    }
	
    //camera tracks player movement on x axis
	void Update() {
        distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
        transform.position = new Vector3(transform.position.x + distanceToMove, transform.position.y, transform.position.z);
        lastSquarePosition = squarePlayer.transform.position;
	}
}
