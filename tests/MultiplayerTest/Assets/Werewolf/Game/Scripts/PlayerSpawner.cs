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

using System.Linq;
using Werewolf.Player;

namespace Werewolf
{
    public class PlayerSpawner : MonoBehaviourPunCallbacks
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

        //
        // is called before the first frame update
        private void Start()
        {
            // TODO: Consider across scenes?
            _spawnPoints.AddRange(GameObject.FindGameObjectsWithTag(Metadata.Tags.Respawn));
            Debug.LogFormat($"{logScope}: We are instantiating player.");

            if (PhotonNetwork.IsMasterClient)
            {
                StartCoroutine(DistributeSpawnPoints());
            }
        }

        #endregion

        #region Private Callbacks

        private IEnumerator DistributeSpawnPoints()
        {
            var playerList = PhotonNetwork.PlayerList;
            var playerCount = playerList.Count();
            for (var i = 0; i < playerCount; i++)
            {
                var player = playerList[i];
                photonView.RPC(nameof(RpcInstantiatePlayer), player, i);
                yield return new WaitForEndOfFrame();
            }
        }

        private IEnumerator InstantiatePlayer(int spawnIndex)
        {
            if (!MetaPlatform.IsUserLoggedIn)
            {
                yield return MetaPlatform.Instance.LogIn();
            }

            var userId = MetaPlatform.UserId.ToString();
            var transform = _spawnPoints[spawnIndex].transform;
            var player = PhotonNetwork.Instantiate(_playerPrefab.name, transform.position + _spawnPointOffsets, transform.rotation, 0, new object[] { userId });
            var camera = player.GetComponent<CameraController>();
            camera.OnStartFollowing();
            PhotonNetwork.LocalPlayer.TagObject = player;
        }

        [PunRPC]
        private void RpcInstantiatePlayer(int spawnIndex, PhotonMessageInfo info)
        {
            StartCoroutine(InstantiatePlayer(spawnIndex));
        }

        #endregion
    }
}
