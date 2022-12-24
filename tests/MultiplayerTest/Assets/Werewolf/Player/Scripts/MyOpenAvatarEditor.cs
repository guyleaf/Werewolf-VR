using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyOpenAvatarEditor : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OpenAvatarEditor()
    {
        print("Launching Avatar Editor");
        AvatarEditorDeeplink.LaunchAvatarEditor();
    }
}
