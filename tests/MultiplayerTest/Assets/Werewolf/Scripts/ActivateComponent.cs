using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateComponent : MonoBehaviour
{
    public GameObject voteUI;
    private float timer = 0f;
    // Start is called before the first frame update
    void Start()
    {
        voteUI = GameObject.Find("Vote UI");
        Debug.Log("Find UI");
    }

    void UIactive()
    {
        voteUI.SetActive(true);
        Debug.Log("UI activate! ");
    }
    // Update is called once per frame
    void Update()
    {
        if (timer > 10)
        {
            UIactive();
            timer = 0;
        }
        timer += Time.deltaTime;
    }
}
