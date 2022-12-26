using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;
using UnityEngine.Assertions;

namespace Werewolf.UI
{
    public class HMDTrackerForUI : MonoBehaviour
    {
        [SerializeField]
        private Vector3 _positionOffset = Vector3.zero;

        [SerializeField]
        private float _smoothTime = 0.3f;

        [SerializeField, Optional]
        private Transform _canvasTransform;

        [SerializeField]
        private OVRCameraRig _ovrCameraRig;

        private Transform _cameraTransform;

        private Vector3 _velocity = Vector3.zero;

        // private float _currentY = 0f;

        void Awake()
        {
            _cameraTransform = _ovrCameraRig != null ? _ovrCameraRig.centerEyeAnchor : null;
            _cameraTransform = _cameraTransform != null ? _cameraTransform : Camera.main.transform;

            _canvasTransform =
            _canvasTransform != null ? _canvasTransform : this.gameObject.transform;
        }

        // Start is called before the first frame update
        void Start()
        {
            // UpdateYAxis();
        }

        // void OnEnable()
        // {
        //     OVRManager.TrackingAcquired += UpdateYAxis;
        //     OVRManager.HMDMounted += UpdateYAxis;
        //     OVRManager.display.RecenteredPose += UpdateYAxis;
        // }

        // void OnDisable()
        // {
        //     OVRManager.TrackingAcquired -= UpdateYAxis;
        //     OVRManager.HMDMounted -= UpdateYAxis;
        //     OVRManager.display.RecenteredPose -= UpdateYAxis;
        // }

        // Update is called once per frame
        void LateUpdate()
        {
            // TODO: Provide options for locking specific axis.

            var oldPosition = _canvasTransform.position;
            var desiredPosition = _cameraTransform.TransformPoint(_positionOffset);

            // if (Mathf.Abs(desiredPosition.y - oldPosition.y) < 0.5f)
            // {
            //     desiredPosition.y = oldPosition.y;
            // }

            // desiredPosition.y = oldPosition.y;
            _canvasTransform.position = Vector3.SmoothDamp(oldPosition, desiredPosition, ref _velocity, _smoothTime);

            // var desiredRotation = new Quaternion(0f, _cameraTransform.rotation.y, 0f, _cameraTransform.rotation.w);
            var desiredRotation = _cameraTransform.rotation;
            desiredRotation.x = 0f;
            desiredRotation.z -= 0.015f;
            _canvasTransform.rotation = Quaternion.Lerp(_canvasTransform.rotation, desiredRotation, _smoothTime / Time.deltaTime);
        }

        // private void UpdateYAxis()
        // {
        //     _currentY = _cameraTransform.position.y;
        //     Debug.Log(_currentY);
        // }
    }
}