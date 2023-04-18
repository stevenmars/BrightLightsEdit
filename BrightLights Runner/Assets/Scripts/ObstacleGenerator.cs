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

    private ObjectPool obstacleObjectPool;


    // Use this for initialization
    void Start()
    {
        obstacleWidth = theObstacle.GetComponent<BoxCollider2D>().size.x;
        //obstacleObjectPool = GameObject.Find("ObstacleObjectPool").GetComponent<ObjectPool>();

    }

    // Update is called once per frame
    void Update()
    {
       
           // Debug.Log(" transform position: " + transform.position.x + " obstacle generation point:" + generationPoint.position.x);
            if (transform.position.x < generationPoint.position.x)
            {
               // Debug.Log("generate ground");
                distanceBetween = Random.Range(distanceMin, distanceMax);
                transform.position = new Vector3(transform.position.x + obstacleWidth + distanceBetween, transform.position.y, transform.position.z); //+10 because the ground is 10units long


                //Instantiate(theObstacle, transform.position, transform.rotation); //generate new ground

                // Generate new ground using the object pool
                theObstacle = ObjectPool.Instance.GetPooledObject("Obstacle");
                theObstacle.transform.position = transform.position;
                theObstacle.transform.rotation = transform.rotation;
                theObstacle.SetActive(true);


        }
           


        
    }

  
}
