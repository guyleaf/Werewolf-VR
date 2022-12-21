using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class UIController : MonoBehaviour
{
    // UI state
    private string currentUIName = UnifiedUINames.UINames.NothingUI; // point to opened ui 
    private Dictionary<string, GameObject> uiNameMap 
        = new Dictionary<string, GameObject>(); // mapping string to ui

    // UI List
    [SerializeField]private GameObject enterUI;
    [SerializeField] private GameObject loadingUI;
    [SerializeField] private GameObject lobbyUI;
    [SerializeField] private GameObject nothingUI;
    [SerializeField] private GameObject voteUI; 
    [SerializeField] private GameObject waitingRoomUI;

    // Start is called before the first frame update
    void Start()
    {
        uiNameMap.Add(UnifiedUINames.UINames.EnterUI, enterUI);
        uiNameMap.Add(UnifiedUINames.UINames.LoadingUI, loadingUI);
        uiNameMap.Add(UnifiedUINames.UINames.LobbyUI, lobbyUI);
        uiNameMap.Add(UnifiedUINames.UINames.NothingUI, nothingUI);
        uiNameMap.Add(UnifiedUINames.UINames.VoteUI, voteUI);
        uiNameMap.Add(UnifiedUINames.UINames.WaitingRoomUI, waitingRoomUI);
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
        SwitchTo("Nothing UI");
    }

    private bool OpenUI(string uiName)
    {
        GameObject uiToOpen;
        if (uiNameMap.TryGetValue(uiName, out uiToOpen))
        {
            uiToOpen.SetActive(true);
            // SetActiveRecursively(uiToOpen.transform, true);
            return true;
        }
        return false;
    }

    private bool CloseUI(string uiName)
    {
        GameObject uiToClose;
        if(uiNameMap.TryGetValue(uiName, out uiToClose))
        {
            uiToClose.SetActive(false);
            // SetActiveRecursively(uiToClose.transform, false);
            return true;
        }
        return false;
    }

    public static void SetActiveRecursively(Transform parent, bool active)
    {
        parent.gameObject.SetActive(active);
        foreach (Transform child in parent)
        {
            SetActiveRecursively(child, active);
        }
    }
}
