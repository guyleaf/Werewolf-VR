using System.Collections.Generic;
using Oculus.Avatar2;
using UnityEngine;
using UnityEngine.XR;
using Oculus.Interaction;
using Oculus.Interaction.Input;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Werewolf.Player
{
    public class PlayerAvatarInput2 : OvrAvatarInputManager
    {
        private const string logScope = "PlayerInput2";

        [SerializeField]
        private OVRCameraRig _ovrCameraRig;

        [SerializeField, Interface(typeof(IHand))]
        private MonoBehaviour _leftHand;

        private IHand LeftHand;

        [SerializeField, Interface(typeof(IHand))]
        private MonoBehaviour _rightHand;

        private IHand RightHand;

        // Only used in editor, produces warnings when packaging
#pragma warning disable CS0414 // is assigned but its value is never used
        [SerializeField]
        private bool _debugDrawTrackingLocations = false;
#pragma warning restore CS0414 // is assigned but its value is never used

        private void Awake()
        {
            LeftHand = _leftHand as IHand;
            RightHand = _rightHand as IHand;

            // Debug Drawing
#if UNITY_EDITOR
            SceneView.duringSceneGui += OnSceneGUI;
#endif
        }

        private void Start()
        {
            if (_ovrCameraRig == null)
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
                if (LeftHand == null || RightHand == null)
                {
                    Debug.LogWarning("Use default hand tracking input.");
                }
                else
                {
                    Debug.Log("HandTrackingDelegate");
                    BodyTracking.HandTrackingDelegate = new PlayerHandTrackingDelegate(LeftHand, RightHand);
                }

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
