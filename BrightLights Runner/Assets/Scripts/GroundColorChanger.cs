using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundColorChanger : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnEnable()
    {
        Color orange = new Color(0.8f, 0.4f, 0.1f, 1f);
        Renderer groundRenderer = GetComponent<Renderer>();
        if (groundRenderer != null)
        {
            groundRenderer.material.color = orange;
        }
    }
}
