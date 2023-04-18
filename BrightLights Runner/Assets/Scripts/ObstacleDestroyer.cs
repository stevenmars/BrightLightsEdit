using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleDestroyer : MonoBehaviour {

    public GameObject obstacleDestructionPoint;

    // Use this for initialization
    void Start()
    {
        obstacleDestructionPoint = GameObject.Find("ObstacleDestructionPoint");
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log("Player position: " + PlayerController.playerPosition + ", transform position: " + transform.position.x);
        //Debug.Log(" transform position: " + transform.position.x);
        //Debug.Log(" transform position: " + transform.position.x + "Obstacle destruction point: " + obstacleDestructionPoint.transform.position.x);
        
        if (transform.position.x < obstacleDestructionPoint.transform.position.x)
        {
           // Debug.Log("destroy obstacle");
            //Destroy(gameObject); //destroy obstacle
            gameObject.SetActive(false);
        }
        
    }
}
