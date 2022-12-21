using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectedVisual : MonoBehaviour
{
    [SerializeField] private GameObject selectedVisual;
    [SerializeField] private bool defaultSelect; // not response to maintain data correction

    void Start()
    {
        if (defaultSelect)
        {
            Selected();
        }
    }

    void OnEnable()
    {
        if (defaultSelect)
        {
            Selected();
        }
    }

    public void Selected()
    {
        selectedVisual.transform.position = this.transform.position;
    }
}
