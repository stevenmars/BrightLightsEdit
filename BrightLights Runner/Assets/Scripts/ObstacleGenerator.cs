using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleGenerator : MonoBehaviour {

    public GameObject theObstacle;
    public Transform generationPoint;
    public float distanceBetween;
    public float distanceMin;
    public float distanceMax;

    private float obstacleWidth;

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
            distanceBetween = Random.Range(distanceMin, distanceMax);
            transform.position = new Vector3(transform.position.x + obstacleWidth + distanceBetween, transform.position.y, transform.position.z); //+10 because the ground is 10units long
            Instantiate(theObstacle, transform.position, transform.rotation); //generate new ground
        }
    }
}
