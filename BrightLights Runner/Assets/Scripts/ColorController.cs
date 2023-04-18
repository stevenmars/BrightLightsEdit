using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorController : MonoBehaviour
{
    //public GameManager theGameManager;
    private Renderer objectRenderer;

    public static Color redGreenEnd = new Color(237f / 255f, 222f / 255f, 0f);
    public static Color blueYellowEnd = new Color(121f / 255f, 255f / 255f, 110f / 255f);

    private int gameOption;

    // Start is called before the first frame update
    void Start()
    {
        objectRenderer = GetComponent<Renderer>();
        gameOption = GameManager.gameOption;
        Debug.Log("Color Controller " + gameOption);



        if (gameOption == 1)
        {
            objectRenderer.material.color = redGreenEnd;
        }
        else if (gameOption == 2)
        {
            objectRenderer.material.color = blueYellowEnd;
        }
        else
        {
            objectRenderer.material.color = Color.black;
        }
    }
}
