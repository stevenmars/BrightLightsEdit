using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public PlayerController squarePlayer;
    public Transform cameraTransform;
    public float shakeTime, shakeIntensity, shakeCalmDown;

    public Camera cam;
    private Vector3 lastSquarePosition, savedPos;
    private float distanceToMove, brightTime, t, savedPosx, savedPosy, savedPosz;

	void Awake() {
        squarePlayer = FindObjectOfType<PlayerController>();
        lastSquarePosition = squarePlayer.transform.position;
        cam = GetComponent<Camera>();
        cameraTransform = GetComponent<Transform>();
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = Color.white;
        brightTime = 0;
        t = 0;
        shakeTime = 0.0f;
        shakeIntensity = 0.2f;
        shakeCalmDown = 2.0f;
    }
	
    //camera tracks player movement on x axis
	void Update()
    {
        //update the time
        brightTime += Time.deltaTime;

        distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
        transform.position = new Vector3(transform.position.x + distanceToMove, 0, transform.position.z);
        lastSquarePosition = squarePlayer.transform.position;

        //screenshake effect
        if (shakeTime > 0)
        {
            distanceToMove = squarePlayer.transform.position.x - lastSquarePosition.x;
            transform.position = new Vector3(transform.position.x + distanceToMove, transform.position.y + Random.Range(-1.0f, 1.0f) * shakeIntensity, transform.position.z);
            shakeTime -= Time.deltaTime * shakeCalmDown;
            lastSquarePosition = squarePlayer.transform.position;
        }

        //fade the background colour from white to black
        t = Mathf.Lerp(brightTime, 3, 0)/30;
        //cam.backgroundColor = Color.Lerp(Color.white, Color.black, t);

        Color targetColor = Color.Lerp(Color.white, Color.black, t);

        // Apply the deuteranomaly color transformation
        Color deuteranomalyColor = DeuteranomalyColorTransform(targetColor);

        // Set the background color to the transformed color
        cam.backgroundColor = deuteranomalyColor;
    }

    private Color SimplifiedDeuteranomalyTransform(Color inputColor)
    {
        float desaturationFactor = 0.5f; // Adjust this value to control the strength of the effect
        float newGreen = Mathf.Lerp(inputColor.g, 0.5f, desaturationFactor);
        return new Color(inputColor.r, newGreen, inputColor.b, inputColor.a);
    }

    private Color DeuteranomalyColorTransform(Color inputColor)
    {
        // RGB to LMS conversion matrix
        Matrix4x4 rgbToLms = new Matrix4x4(
            new Vector4(17.8824f, -0.2288f, 0.0f, 0.0f),
            new Vector4(3.45565f, 11.9196f, 0.0f, 0.0f),
            new Vector4(-0.02996f, -0.1584f, 6.54873f, 0.0f),
            new Vector4(0.0f, 0.0f, 0.0f, 1.0f)
        );

        // Deuteranomaly transformation matrix
        float lambda = 1.0f; // You can adjust this value to control the severity of the deuteranomaly effect
        Matrix4x4 deuteranomalyTransform = new Matrix4x4(
            new Vector4(lambda, 1.0f - lambda, 0.0f, 0.0f),
            new Vector4(0.0f, 1.0f, 0.0f, 0.0f),
            new Vector4(0.0f, 0.0f, 1.0f, 0.0f),
            new Vector4(0.0f, 0.0f, 0.0f, 1.0f)
        );

        // LMS to RGB conversion matrix
        Matrix4x4 lmsToRgb = new Matrix4x4(
            new Vector4(0.0809444f, 0.12844f, 0.0f, 0.0f),
            new Vector4(-0.130504f, 0.8746f, 0.0f, 0.0f),
            new Vector4(0.116721f, -0.27666f, 0.057239f, 0.0f),
            new Vector4(0.0f, 0.0f, 0.0f, 1.0f)
        );

        // Convert inputColor to Vector4
        Vector4 inputVec = new Vector4(inputColor.r, inputColor.g, inputColor.b, inputColor.a);

        // Apply RGB to LMS conversion
        Vector4 lmsColor = rgbToLms * inputVec;

        // Apply deuteranomaly transformation
        Vector4 transformedLmsColor = deuteranomalyTransform * lmsColor;

        // Convert back to RGB
        Vector4 outputVec = lmsToRgb * transformedLmsColor;

        // Return the output color
        return new Color(outputVec.x, outputVec.y, outputVec.z, outputVec.w);
    }

    // change player colour based on time elapsed since game start or lightbulb press
    public void ChangePlayerColour()
    {
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
    
    // reset brightness of player and background to white by resetting "time"
    public void RestartBrightness()
    {
        brightTime = 0;
        t = Mathf.Lerp(brightTime, 3, 0) / 30;
        squarePlayer.playerColour.material.color = Color.Lerp(Color.white, Color.black, t);
    }
}
