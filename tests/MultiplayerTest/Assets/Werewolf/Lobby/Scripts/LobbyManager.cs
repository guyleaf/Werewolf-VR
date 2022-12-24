using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;

public class LobbyManager : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private GameObject _loadingUI;

    [SerializeField]
    private GameObject _avatarUI;

    [SerializeField]
    private GameObject _lobbyUI;

    #region Unity Callbacks

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    #endregion

    #region Photon Callbacks
    #endregion

    #region Public Methods
    #endregion
}
