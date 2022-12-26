using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlStar : MonoBehaviour
{
    public Skybox star;
    public LightManager lightManager;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        bool openStar = false;
        if (lightManager.TimeOfDay > 1125 || lightManager.TimeOfDay < 300)
        {
            openStar = true;
        }
        star.enabled = openStar;
    }
}
