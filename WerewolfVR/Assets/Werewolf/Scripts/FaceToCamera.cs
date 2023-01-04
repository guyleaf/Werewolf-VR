using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceToCamera : MonoBehaviour
{
    public Transform mLookAt;
    private Transform localTrans;
    private float distanceFromCamera = 0.5f;
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
            /*_canvasTransform.position = Vector3.SmoothDamp(oldPosition, desiredPosition, ref _velocity, _smoothTime);

            // var desiredRotation = new Quaternion(0f, _cameraTransform.rotation.y, 0f, _cameraTransform.rotation.w);
            var desiredRotation = _cameraTransform.rotation;
            desiredRotation.x = 0f;
            _canvasTransform.rotation = Quaternion.Lerp(_canvasTransform.rotation, desiredRotation, _smoothTime / Time.deltaTime);*/
        }
    }
}
