using Oculus.Platform;

using Photon.Pun;

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.UIElements;

namespace Werewolf
{
    public class PlayerSpawner : MonoBehaviour
    {
        private const string logScope = "PlayerSpawner";

        [Tooltip("The prefab to use for representing the player")]
        [SerializeField]
        private GameObject _playerPrefab;

        [SerializeField]
        private Vector3 _spawnPointOffsets;

        [Header("Optional")]
        [Tooltip("A list of spawn points. It will collect all gameobjects with a tag 'Respawn'.")]
        [SerializeField]
        private List<GameObject> _spawnPoints = new();

        #region Unity Callbacks

        private void Awake()
        {
            Assert.IsNotNull(_playerPrefab, $"{logScope}: Missing playerPrefab Reference.");
        }

        // Start is called before the first frame update
        void Start()
        {
            // TODO: Consider across scenes?
            _spawnPoints.AddRange(GameObject.FindGameObjectsWithTag(Metadata.Tags.Respawn));
            Debug.LogFormat($"{logScope}: We are instantiating player.");
            StartCoroutine(InstantiateNetworkAvatar());
        }

        #endregion

        #region Private Callbacks

        private IEnumerator InstantiateNetworkAvatar()
        {
            if (OvrPlatformInit.status == OvrPlatformInitStatus.NotStarted)
            {
                OvrPlatformInit.InitializeOvrPlatform();
            }

            while (OvrPlatformInit.status != OvrPlatformInitStatus.Succeeded)
            {
                if (OvrPlatformInit.status == OvrPlatformInitStatus.Failed)
                {
                    Debug.LogError("OVR Platform failed to initialise");
                    yield break;
                }
                yield return null;
            }

            ulong userId = 0;
            bool getUserIdComplete = false;
            Users.GetLoggedInUser().OnComplete(message =>
            {
                if (message.IsError)
                {
                    Debug.LogError("Getting Logged in user error " + message.GetError());
                }
                else
                {
                    userId = message.Data.ID;
                }
                getUserIdComplete = true;
            });

            while (!getUserIdComplete || !PhotonNetwork.InRoom) { yield return null; }

            Debug.Log(userId);
            var playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            Debug.AssertFormat(_spawnPoints.Count >= playerCount, $"{logScope}: No spawn points available.");
            var transform = _spawnPoints[playerCount - 1].transform;
            PhotonNetwork.Instantiate(_playerPrefab.name, transform.position + _spawnPointOffsets, transform.rotation, 0, new object[] { (Int64)userId });
        }

        #endregion
    }
}
