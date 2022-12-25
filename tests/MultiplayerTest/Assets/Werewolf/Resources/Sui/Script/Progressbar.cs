using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Progressbar : MonoBehaviour
{
    [SerializeField] public float remainTime;
    [SerializeField] public float totalTime;
    [SerializeField] public string titleString="Remain Time";

    [SerializeField] private TMPro.TextMeshProUGUI progressText;
    [SerializeField] private GameObject progressBar;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        progressText.text = titleString + ": " + remainTime.ToString() + "s";
        var theBarRectTransform = progressBar.transform as RectTransform;
        theBarRectTransform.sizeDelta = new Vector2(theBarRectTransform.rect.width * remainTime / totalTime, theBarRectTransform.sizeDelta.y);
    }
}
