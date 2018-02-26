using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleGenerator : MonoBehaviour {

    public GameObject theObstacle;
    public Transform generationPoint;

    private float obstacleWidth; //also not needed maybe

    // Use this for initialization
    void Start()
    {
        obstacleWidth = theObstacle.GetComponent<BoxCollider2D>().size.x;
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.x < generationPoint.position.x)
        {
            transform.position = new Vector3(transform.position.x + obstacleWidth+15, transform.position.y, transform.position.z); //+10 because the ground is 10units long
            //generate new ground
            Instantiate(theObstacle, transform.position, transform.rotation);
        }
    }
}
