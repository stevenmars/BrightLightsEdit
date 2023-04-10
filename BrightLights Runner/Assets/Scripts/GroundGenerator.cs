using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundGenerator : MonoBehaviour {

    public GameObject theGround;
    public Transform generationPoint;

    private float groundWidth;

    private ObjectPool groundObjectPool;




    // Use this for initialization
    void Start () {

        groundWidth = theGround.GetComponent<BoxCollider2D>().size.x;
        //groundObjectPool = GameObject.Find("GroundObjectPool").GetComponent<ObjectPool>();

    }
	
	// Update is called once per frame
	void Update () {
        
            Debug.Log(" transform position: " + transform.position.x + " ground generation point:" + generationPoint.position.x);

            if (transform.position.x < generationPoint.position.x)
            {
                Debug.Log("generate ground");
                transform.position = new Vector3(transform.position.x + groundWidth, transform.position.y, transform.position.z);

                //generate new ground
                //Instantiate(theGround, transform.position, transform.rotation);

                // Generate new ground using the object pool
                GameObject newGround = ObjectPool.Instance.GetPooledObject("Ground");
                newGround.transform.position = transform.position;
                newGround.transform.rotation = transform.rotation;
                newGround.SetActive(true);


        }
           
	}

}
