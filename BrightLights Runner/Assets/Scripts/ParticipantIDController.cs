using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ParticipantIDController : MonoBehaviour
{
    public GameObject inputField;
    public static string participantID; //global var

    public void SaveID()
    {
        participantID = inputField.GetComponent<InputField>().text;
        print(participantID);
    }
}
