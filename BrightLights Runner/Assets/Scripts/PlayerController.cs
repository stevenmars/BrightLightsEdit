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
    public bool grounded;
    public LayerMask whatIsGround;

    private Rigidbody2D rb2d;
    private Collider2D cldr2d;
    private Quaternion targetRotation;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        cldr2d = GetComponent<Collider2D>();
        jump = false; //stops player jumping as they spawn
        grounded = false;
        targetRotation = transform.rotation;
    }

    void Update()
    {
        //grounded check
        grounded = Physics2D.IsTouchingLayers(cldr2d, whatIsGround);


        //if (rb2d.velocity.y >= 0 && rb2d.velocity.y <= 0.2) //no velocity on Y axis (accounts for rotation errors)
         //   grounded = true;
        //else grounded = false;

        //jump check FOR MOBILE
        if (Input.touchCount > 0)
        {
            if ((Input.GetTouch(0).phase == TouchPhase.Began && grounded)) //if jump is pressed AND player on the ground
                jump = true;
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
            StartCoroutine("Flip");//BUG: This doesnt flip you forward always, on even jumps you backflip
            jump = false;
        }
    }

    IEnumerator Flip() //flip in the air
    {
        targetRotation *= Quaternion.Euler(0, 0, 180f);
        yield return null;
    }
}
