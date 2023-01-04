using Photon.Pun;

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

namespace Leaf.PhotonTutorial.Player
{
    // Notice: this sample code is not the best implementation
    public class PlayerAnimatorManager : MonoBehaviourPun
    {
        // Start is called before the first frame update
        private void Start()
        {
            this.animator = this.GetComponent<Animator>();
            Assert.IsNotNull(this.animator, "PlayerAnimatorManager is Missing Animator Component");
        }

        // Update is called once per frame
        private void Update()
        {
#if UNITY_EDITOR
            if (!this.photonView.IsMine && PhotonNetwork.IsConnected)
            {
                return;
            }
#else
            if (!this.photonView.IsMine)
            {
                return;
            }
#endif

            this.UpdateMovingRelatedParameters();
            this.UpdateJumpingRelatedParameters();
        }

        private void UpdateMovingRelatedParameters()
        {
            float h = Input.GetAxis("Horizontal");
            float v = Math.Max(Input.GetAxis("Vertical"), 0);
            this.animator.SetFloat("Speed", h * h + v * v);

            // how much does the time take to get to the target value (h)
            // direction => spend dampTime * deltaTime => h
            // dampTime * deltaTime = # of frames * time per frame
            // see: https://answers.unity.com/questions/611667/damptime-and-deltatime-in-setfloat-parameters.html
            this.animator.SetFloat("Direction", h, this.directionDampTime, Time.deltaTime);
        }

        private void UpdateJumpingRelatedParameters()
        {
            AnimatorStateInfo stateInfo = this.animator.GetCurrentAnimatorStateInfo(0);
            // if we are running
            if (stateInfo.IsName("Run"))
            {
                if (Input.GetButtonDown("Fire2"))
                {
                    this.animator.SetTrigger("Jump");
                }
            }
        }

        private Animator animator;

        [SerializeField]
        private float directionDampTime = 0.25f;
    }
}
