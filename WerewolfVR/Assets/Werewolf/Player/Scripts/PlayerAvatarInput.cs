using System.Collections.Generic;
using Oculus.Avatar2;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.Assertions;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Werewolf.Player
{
    public class PlayerAvatarInput : OvrAvatarInputManager
    {
        private const string logScope = "PlayerInput";

        [SerializeField]
        [Tooltip("Use Camera Rig")]
        private bool _useOvrCameraRig;

        [SerializeField]
        [Tooltip("Optional. If added, it will use input directly from OVRCameraRig instead of doing its own calculations.")]
        private OVRCameraRig _ovrCameraRig = null;

        // Only used in editor, produces warnings when packaging
#pragma warning disable CS0414 // is assigned but its value is never used
        [SerializeField]
        private bool _debugDrawTrackingLocations = false;
#pragma warning restore CS0414 // is assigned but its value is never used

        protected void Awake()
        {
            // Debug Drawing
#if UNITY_EDITOR
            SceneView.duringSceneGui += OnSceneGUI;
#endif
        }

        private void Start()
        {
            // If OVRCameraRig doesn't exist, we should set tracking origin ourselves
            if (_useOvrCameraRig)
            {
                if (_ovrCameraRig == null)
                {
                    _ovrCameraRig = FindObjectOfType<OVRCameraRig>();
                    Assert.IsTrue(_ovrCameraRig, "The OVRCameraRig component is not found.");
                }
            }
            else
            {
                if (OVRManager.instance == null)
                {
                    OvrAvatarLog.LogDebug("Creating OVRManager, as one doesn't exist yet.", logScope, this);
                    var go = new GameObject("OVRManager");
                    var manager = go.AddComponent<OVRManager>();
                    manager.trackingOriginType = OVRManager.TrackingOrigin.FloorLevel;
                }
                else
                {
                    OVRManager.instance.trackingOriginType = OVRManager.TrackingOrigin.FloorLevel;
                }

                OvrAvatarLog.LogInfo("Setting Tracking Origin to FloorLevel", logScope, this);

                var instances = new List<XRInputSubsystem>();
                SubsystemManager.GetInstances(instances);
                foreach (var instance in instances)
                {
                    instance.TrySetTrackingOriginMode(TrackingOriginModeFlags.Floor);
                }
            }

            if (BodyTracking != null)
            {
                BodyTracking.InputTrackingDelegate = new SampleInputTrackingDelegate(_ovrCameraRig);
                BodyTracking.InputControlDelegate = new SampleInputControlDelegate();
            }
        }

        protected override void OnDestroyCalled()
        {
#if UNITY_EDITOR
            SceneView.duringSceneGui -= OnSceneGUI;
#endif

            base.OnDestroyCalled();
        }

#if UNITY_EDITOR
        #region Debug Drawing

        private void OnSceneGUI(SceneView sceneView)
        {
            if (_debugDrawTrackingLocations)
            {
                DrawTrackingLocations();
            }
        }

        private void DrawTrackingLocations()
        {
            var inputTrackingState = BodyTracking.InputTrackingState;

            float radius = 0.2f;
            Quaternion orientation;
            float outerRadius() => radius + 0.25f;
            Vector3 forward() => orientation * Vector3.forward;

            Handles.color = Color.blue;
            Handles.RadiusHandle(Quaternion.identity, inputTrackingState.headset.position, radius);

            orientation = inputTrackingState.headset.orientation;
            Handles.DrawLine((Vector3)inputTrackingState.headset.position + forward() * radius,
                (Vector3)inputTrackingState.headset.position + forward() * outerRadius());

            radius = 0.1f;
            Handles.color = Color.yellow;
            Handles.RadiusHandle(Quaternion.identity, inputTrackingState.leftController.position, radius);

            orientation = inputTrackingState.leftController.orientation;
            Handles.DrawLine((Vector3)inputTrackingState.leftController.position + forward() * radius,
                (Vector3)inputTrackingState.leftController.position + forward() * outerRadius());

            Handles.color = Color.yellow;
            Handles.RadiusHandle(Quaternion.identity, inputTrackingState.rightController.position, radius);

            orientation = inputTrackingState.rightController.orientation;
            Handles.DrawLine((Vector3)inputTrackingState.rightController.position + forward() * radius,
                (Vector3)inputTrackingState.rightController.position + forward() * outerRadius());
        }

        #endregion
#endif // UNITY_EDITOR
    }
}
