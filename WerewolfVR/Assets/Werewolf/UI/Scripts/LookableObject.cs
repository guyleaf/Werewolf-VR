using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

namespace Werewolf.UI
{
    public class LookableObject : MonoBehaviour
    {
        public enum Direction
        {
            Up,
            Down
        }

        [SerializeField]
        private OVRCameraRig _ovrCameraRig;

        [SerializeField]
        private GameObject _canvas;

        [SerializeField]
        private float _threshold;

        [SerializeField]
        private Direction _direction;

        // Start is called before the first frame update
        void Start()
        {
            if (_ovrCameraRig == null)
            {
                _ovrCameraRig = FindObjectOfType<OVRCameraRig>();
                Assert.IsNotNull(_ovrCameraRig);
            }
            Assert.IsNotNull(_canvas);
        }

        // Update is called once per frame
        void Update()
        {
            var camera = _ovrCameraRig.centerEyeAnchor;
            if (_direction == Direction.Up)
            {
                _canvas.SetActive(Vector3.Dot(camera.forward, Vector3.up) > _threshold);
            }
            else
            {
                _canvas.SetActive(Vector3.Dot(camera.forward, Vector3.down) > _threshold);
            }
        }
    }
}
