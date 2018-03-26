using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Controls player movement

public class PlayerController : MonoBehaviour
{
    [HideInInspector] public bool jump;

    public float moveSpeed = 5f;
    public float jumpForce = 700f;
    public bool grounded;
    public LayerMask whatIsGround;
    public GameManager theGameManager;
    public CameraController theCamera;
    public LightbulbController theBulb;

    private Rigidbody2D rb2d;
    private Collider2D cldr2d;
    private Quaternion targetRotation;
    public Renderer playerColour;
    private float brightTime, bulbCounter;
    private bool isLightbulbPress;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        cldr2d = GetComponent<Collider2D>();
        playerColour = gameObject.GetComponent<Renderer>();
        grounded = false;
        targetRotation = transform.rotation;
        brightTime = 0;
        bulbCounter = 3;
    }

    void Update()
    {
        //update the time
        brightTime += Time.deltaTime;

        //grounded check
        grounded = Physics2D.IsTouchingLayers(cldr2d, whatIsGround);

        if (Input.touchCount > 0)
        {
            //lightbulb button check
            Vector3 lightbulbPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            Vector2 touchPos = new Vector2(lightbulbPos.x, lightbulbPos.y);
            if (theBulb.GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchPos) && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                theCamera.RestartBrightness();
                bulbCounter = bulbCounter - 1;

                //player only gets 3 bulbs
                if (bulbCounter <= 0)
                {
                    theBulb.gameObject.SetActive(false);
                }
            }
            else if ((Input.GetTouch(0).phase == TouchPhase.Began && grounded)) //if jump is pressed AND player on the ground
            { 
                jump = true;
            }
        }
        transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, 5f * Time.deltaTime);
    }

    //Player movement physics
    void FixedUpdate()
    {
        rb2d.velocity = new Vector2(moveSpeed, rb2d.velocity.y);
        //jump and rotate
        if (jump)
        {
            rb2d.AddForce(new Vector2(0f, jumpForce));
            StartCoroutine("Flip");//BUG: This doesnt flip you forward always, on even jumps you backflip -> animate instead
            jump = false;
        }
    }

    IEnumerator Flip() //flip in the air
    {
        targetRotation *= Quaternion.Euler(0, 0, 180f);
        yield return null;
    }

    //called when player touches an obstacle
    private void OnCollisionEnter2D(Collision2D other)
    { 
        if (other.gameObject.tag == "Obstacle") //maybe add animation for fading out
        {
            //theGameManager.Restart(); //in case we decide to reset after death instead of continue, this works except for the background colour
            //theCamera.RestartBrightness(); //resets the brightness of the screen back to white

            //change player colour
            theCamera.ChangePlayerColour();
            Destroy(other.gameObject, 0.2f); //removes the obstacle
        }
    }
}
