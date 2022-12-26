using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceToCameraNameUI : MonoBehaviour
{
    public Transform mLookAt, cubeTransform;
    // Start is called before the first frame update
    void Start()
    {
        mLookAt = GameObject.Find("CenterEyeAnchor").GetComponent<Transform>();
        cubeTransform = GameObject.Find("Cube").GetComponent<Transform>();
    }

    // Update is called once per frame
    void LateUpdate()
    {
        transform.LookAt(transform.position + mLookAt.rotation * Vector3.forward, mLookAt.rotation * Vector3.up);
        transform.position = new Vector3(cubeTransform.position.x, cubeTransform.position.y + 0.01f, cubeTransform.position.z);
        //transform.LookAt(mLookAt);
    }
}
