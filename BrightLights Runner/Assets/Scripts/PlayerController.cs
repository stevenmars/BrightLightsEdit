using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Controls player movement

public class PlayerController : MonoBehaviour
{
    [HideInInspector] public bool jump;

    public float moveSpeed = 5f;
    public float jumpForce = 700f;
    public float timer;
    public bool grounded;
    public LayerMask whatIsGround;
    public GameManager theGameManager;
    public CameraController theCamera;
    public LightbulbController theBulb;
    public Renderer playerColour;
    public Vector3 playerPos;
    public Text bulbText, timerText;
    public int bulbCounter, hitCounter;

    private Rigidbody2D rb2d;
    private Collider2D cldr2d;
    private Animator myAnimator;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        cldr2d = GetComponent<Collider2D>();
        myAnimator = GetComponent<Animator>();
        playerColour = gameObject.GetComponent<Renderer>();
        timer = 0;
        bulbCounter = 3;
        hitCounter = 0;
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
                theCamera.RestartBrightness(); //reset background to white
                bulbCounter = bulbCounter - 1;
                SetBulbText(); //update UI bulbCounter

                //player only gets 3 bulbs
                if (bulbCounter <= 0)
                {
                    theBulb.gameObject.SetActive(false);
                    bulbText.gameObject.SetActive(false);
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
            hitCounter++;
            Handheld.Vibrate(); //vibrate the device
            theCamera.shakeTime = 0.2f; //screenshake
            theCamera.ChangePlayerColour(); //sets player colour to current background colour
            Destroy(other.gameObject, 0.2f); //removes the obstacle
        }
    }

    public void SetBulbText()
    {
        bulbText.text = "x" + bulbCounter.ToString();
        theBulb.gameObject.SetActive(true);
        bulbText.gameObject.SetActive(true);
    }
}
