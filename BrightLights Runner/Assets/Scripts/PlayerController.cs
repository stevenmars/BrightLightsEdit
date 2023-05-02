﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Controls player movement

public class PlayerController : MonoBehaviour
{
    [HideInInspector] public bool jump;

    public float moveSpeed = 5f;
    public float jumpForce = 700f;
    public float timer, time1, time2, time3;
    public bool grounded;
    public LayerMask whatIsGround;
    public GameManager theGameManager;
    public CameraController theCamera;
    public LightbulbController theBulb;
    public LifeController theLives;
    public Renderer playerColour;
    public Vector3 playerPos;
    public Text bulbText, lifeText, timerText;
    public int bulbCounter, hitCounter, lifeCounter;
    public Color background1, background2, background3; //store background colours when lightbulbs are hit

    private Rigidbody2D rb2d;
    private Collider2D cldr2d;
    private Animator myAnimator;

    public static float playerPosition;
    private float lastPositionUpdateTime = 0f;
    private float positionUpdateInterval = 0.1f;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        cldr2d = GetComponent<Collider2D>();
        myAnimator = GetComponent<Animator>();
        playerColour = gameObject.GetComponent<Renderer>();
        timer = 0;
        bulbCounter = 3;
        lifeCounter = 3;
        hitCounter = 0;
        SetLifeText();
        SetBulbText();
    }

    void Update()
    {

        //update the timer
        timer += Time.deltaTime;
        timerText.text = timer.ToString("F2"); //seconds and miliseconds

        //grounded check
        grounded = Physics2D.IsTouchingLayers(cldr2d, whatIsGround);

        //move forward
        rb2d.velocity = new Vector2(moveSpeed, rb2d.velocity.y);
    

        if (Input.touchCount > 0)
        {
            //lightbulb button check
            Vector3 lightbulbPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            Vector2 touchPos = new Vector2(lightbulbPos.x, lightbulbPos.y);
            if (theBulb.GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchPos) && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                //get the current background colour and store it in a variable
                if (bulbCounter == 3)
                {
                    time1 = timer;
                    background1 = theCamera.cam.backgroundColor;
                }
                else if (bulbCounter == 2)
                {
                    time2 = timer;
                    background2 = theCamera.cam.backgroundColor;
                }
                else if (bulbCounter == 1)
                {
                    time3 = timer;
                    background3 = theCamera.cam.backgroundColor;
                }

                theCamera.RestartBrightness(); //reset background to original colour (white/red/blue)
                bulbCounter = bulbCounter - 1;
                SetBulbText(); //update UI bulbCounter

                //player only gets 3 bulbs
                if (bulbCounter <= 0)
                {
                    theBulb.gameObject.SetActive(false);
                    bulbText.gameObject.SetActive(false);
                    //theLives.gameObject.SetActive(true);
                    //lifeText.gameObject.SetActive(true);
                }
            }
            else if ((Input.GetTouch(0).phase == TouchPhase.Began && grounded)) //if player is grounded and jump is pressed
            {
                jump = true;
            }
        }
        //front flip animation
        myAnimator.SetBool("Grounded", grounded);
    }

    //Called after Update()
    void FixedUpdate()
    {
        // Make sure the player always moves forward
        //if (rb2d.velocity.x <= 0)
        //{
           // rb2d.velocity = new Vector2(moveSpeed, rb2d.velocity.y);
       // }

        
        //jump and rotate
        if (jump)
        {
            rb2d.AddForce(new Vector2(0f, jumpForce));
            jump = false;
        }
    }

    //called when player touches an obstacle
    private void OnCollisionEnter2D(Collision2D other)
    { 
        if (other.gameObject.tag == "Obstacle") //maybe add animation for fading out
        {
            if (bulbCounter <= 0)
            {
                lifeCounter--; //lose a life
                SetLifeText();
            }

            if (lifeCounter <= 0)
            {
                Handheld.Vibrate(); //vibrate the device
                playerColour.material.color = Color.black; //end game
                hitCounter++;
            }
            else
            {
                hitCounter++;
                Handheld.Vibrate();
                theCamera.shakeTime = 0.2f; //screenshake
                theCamera.ChangePlayerColour(); //sets player colour to current background colour
                //Destroy(other.gameObject, 0.2f); //removes the obstacle
                StartCoroutine(DeactivateAfterDelay(other.gameObject, 0.2f));
            }
        }
    }

    private IEnumerator DeactivateAfterDelay(GameObject obj, float delay)
    {
        yield return new WaitForSeconds(delay);
        obj.SetActive(false);
    }

    public void SetBulbText()
    {
        bulbText.text = "x" + bulbCounter.ToString();
        theBulb.gameObject.SetActive(true);
        bulbText.gameObject.SetActive(true);
    }

    public void SetLifeText()
    {
        lifeText.text = "x" + lifeCounter.ToString();
    }
}
