using ExitGames.Client.Photon;

using Oculus.Platform;

using Photon.Pun;
using Photon.Pun.UtilityScripts;
using Photon.Realtime;

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.UIElements;
using Werewolf.Game;

namespace Werewolf
{
    public class PlayerSpawner : MonoBehaviourPunCallbacks, IOnEventCallback
    {
        public GameObject localAvatar;
        private static class EventCodes
        {
            public const byte InstantiatePlayer = 1;
        }

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
        private GameManager _gm;
        #region Unity Callbacks

        private void Awake()
        {
            Assert.IsNotNull(_playerPrefab, $"{logScope}: Missing playerPrefab Reference.");
        }

        //
        // is called before the first frame update
        private void Start()
        {
            // TODO: Consider across scenes?
            _spawnPoints.AddRange(GameObject.FindGameObjectsWithTag(Metadata.Tags.Respawn));
            Debug.LogFormat($"{logScope}: We are instantiating player.");

            StartCoroutine(GetUserIdFromOculus());
        }

        #endregion

        #region Photon Callbacks

        public void OnEvent(EventData photonEvent)
        {
            var eventCode = photonEvent.Code;

            switch (eventCode)
            {
                case EventCodes.InstantiatePlayer:
                    InstantiatePlayer();
                    break;
                default:
                    break;
            }
        }

        #endregion

        #region Private Callbacks

        private IEnumerator GetUserIdFromOculus()
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

            var userId = "0";
            bool getUserIdComplete = false;
            Users.GetLoggedInUser().OnComplete(message =>
            {
                if (message.IsError)
                {
                    Debug.LogError("Getting Logged in user error " + message.GetError());
                }
                else
                {
                    userId = message.Data.ID.ToString();
                }
                getUserIdComplete = true;
            });

            while (!getUserIdComplete || !PhotonNetwork.InRoom) { yield return null; }

            var playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            Debug.AssertFormat(_spawnPoints.Count >= playerCount, $"{logScope}: No spawn points available.");
            var transform = _spawnPoints[playerCount - 1].transform;
            localAvatar = PhotonNetwork.Instantiate(_playerPrefab.name, transform.position + _spawnPointOffsets, transform.rotation, 0, new object[] { userId });
            //_gm.localAvatar = GameObject.Find($"{gameObject.name}");
            //_gm.speaker = GameObject.Find($"{gameObject.name}/Speaker(Clone)");
            // PhotonNetwork.LocalPlayer.TagObject = PhotonNetwork.Instantiate(_playerPrefab.name, transform.position + _spawnPointOffsets, transform.rotation, 0, new object[] { userId });
        }

        private void InstantiatePlayer()
        {
            // PhotonNetwork.Instantiate(_playerPrefab.name, transform.position + _spawnPointOffsets, transform.rotation, 0, new object[] { (Int64)userId });
        }

        #endregion
    }
}
