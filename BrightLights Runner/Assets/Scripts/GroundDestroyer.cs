using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundDestroyer : MonoBehaviour {

    public GameObject groundDestructionPoint;

	// Use this for initialization
	void Start () {
        groundDestructionPoint = GameObject.Find("GroundDestructionPoint");
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log("Player position: " + PlayerController.playerPosition + ", transform position: " + transform.position.x);
       // Debug.Log(" transform position: " + transform.position.x);

        //Debug.Log(" transform position: " + transform.position.x + "Ground destruction point: " + groundDestructionPoint.transform.position.x);
        if (transform.position.x < groundDestructionPoint.transform.position.x)
        {
           // Debug.Log("destroy ground");
            //Destroy(gameObject); //destroy ground
            gameObject.SetActive(false);

        }
    }
}
