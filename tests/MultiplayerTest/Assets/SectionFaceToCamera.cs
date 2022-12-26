using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SectionFaceToCamera : MonoBehaviour
{
    public Transform mLookAt;
    private Transform localTrans;
    private float distanceFromCamera = 0.45f;
    // Start is called before the first frame update
    void Start()
    {
        localTrans = GetComponent<Transform>();
        mLookAt = GameObject.Find("CenterEyeAnchor").GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        if (mLookAt)
        {
            localTrans.LookAt(2 * localTrans.position - mLookAt.position);
            localTrans.position = mLookAt.position + mLookAt.forward * distanceFromCamera;
        }
    }
}
