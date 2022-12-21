using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchNextUI : MonoBehaviour
{
    public List<string> uiNames;
    public UIController switcher;
    private int currentIndex = -1;

    public void NextUI()
    {
        if (uiNames.Count == 0)
        {
            return;
        }

        int newIdx = currentIndex + 1;
        if (newIdx >= uiNames.Count)
        {
            newIdx = 0;
        }

        if (switcher.SwitchTo(uiNames[newIdx]))
        {
            currentIndex = newIdx;
        }
    }
}
