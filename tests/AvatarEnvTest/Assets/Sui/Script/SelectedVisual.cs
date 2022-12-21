using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectedVisual : MonoBehaviour
{
    public GameObject selectedVisual;

    public void Selected()
    {
        selectedVisual.transform.position = this.transform.position;
    }
}
