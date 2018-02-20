using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundGenerator : MonoBehaviour {

    public GameObject theGround;
    public Transform generationPoint;

    private float groundWidth; //also not needed maybe

	// Use this for initialization
	void Start () {
        groundWidth = theGround.GetComponent<BoxCollider2D>().size.x;
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.x < generationPoint.position.x)
        {
            transform.position = new Vector3(transform.position.x + groundWidth+15, transform.position.y, transform.position.z);
            //generate new ground
            Instantiate(theGround, transform.position, transform.rotation);
        }
	}
}
