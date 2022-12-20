using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class UIController : MonoBehaviour
{
    // UI state
    private string currentUIName = "Enter UI"; // point to opened ui 
    private Dictionary<string, GameObject> uiNameMap 
        = new Dictionary<string, GameObject>(); // mapping string to ui
    // UI List
    public GameObject enterUI;
    public GameObject loadingUI;
    public GameObject voteUI;

    // Start is called before the first frame update
    void Start()
    {
        uiNameMap.Add("Enter UI", enterUI);
        uiNameMap.Add("Loading UI", loadingUI);
        uiNameMap.Add("Vote UI", voteUI);
    }

    public bool SwitchTo(string uiName)
    {
        if (uiName == currentUIName) return true;

        if (OpenUI(uiName)) // try to open ui
        {
            CloseUI(currentUIName); // close current ui
            currentUIName = uiName; // set current ui name to uiName
            return true;
        }
        else
        {
            return false;
        }
    }

    public void CloseAllUI()
    {
        foreach(string uiName in uiNameMap.Keys){
            CloseUI(uiName);
        }
    }

    public bool OpenUI(string uiName)
    {
        GameObject uiToOpen;
        if (uiNameMap.TryGetValue(uiName, out uiToOpen))
        {
            uiToOpen.SetActive(true);
            return true;
        }
        return false;
    }

    public bool CloseUI(string uiName)
    {
        GameObject uiToClose;
        if(uiNameMap.TryGetValue(uiName, out uiToClose))
        {
            uiToClose.SetActive(false);
            return true;
        }
        return false;
    }
}
