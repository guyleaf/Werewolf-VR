using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;


public class vr_control : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        List<InputDevice> devices = new List<InputerDevice>();
        InputDevices.GetDevices(devices);
        foreach (var item in devices)
        {
            Debug.Log(item.name + item.characteristics);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
