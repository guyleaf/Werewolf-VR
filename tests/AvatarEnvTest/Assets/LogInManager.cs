using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using Photon;
using Oculus.Platform;


public class LogInManager : MonoBehaviourPunCallbacks
{
    public GameObject _spawnPoint;
    [SerializeField] OVRCameraRig m_camera;
    [SerializeField] Text m_screenText; //Text
    [SerializeField] ulong m_userId;

    //Singleton implementation
    private static LogInManager m_instance;
    private GameObject myAvatar;
    public static LogInManager Instance
    {
        get
        {
            return m_instance;
        }
    }
    private void Awake()
    {
        if (m_instance == null)
        {
            m_instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    void Start()
    {
        StartCoroutine(SetUserIdFromLoggedInUser());
        StartCoroutine(ConnectToPhotonRoomOnceUserIdIsFound());
        StartCoroutine(InstantiateNetworkedAvatarOnceInRoom());
    }

    IEnumerator SetUserIdFromLoggedInUser()
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
                //m_screenText.text = "OVR Platform failed to initialise";
                yield break;
            }
            yield return null;
        }
        
        Users.GetLoggedInUser().OnComplete(message =>
        {
            if (message.IsError)
            {
                Debug.LogError("Getting Logged in user error " + message.GetError());
            }
            else
            {
                m_userId = message.Data.ID;
                Debug.Log("m_userId: " + m_userId);
            }
        });
    }

    IEnumerator ConnectToPhotonRoomOnceUserIdIsFound()
    {
        while (m_userId == 0)
        {
            //Debug.Log("Waiting for User id to be set before connecting to room");
            yield return null;
        }
        ConnectToPhotonRoom();
    }

    void ConnectToPhotonRoom()
    {
        PhotonNetwork.ConnectUsingSettings();
        //m_screenText.text = "Connecting to Server";
        Debug.Log("Try Connect To Server...");
    }

    public override void OnConnectedToMaster()
    {
        /*PhotonNetwork.JoinLobby();
        //m_screenText.text = "Connecting to Lobby";
    }

    public override void OnJoinedLobby()
    {*/
        //m_screenText.text = "Creating Room";
        //PhotonNetwork.JoinOrCreateRoom("room", null, null);
        Debug.Log("Connected To Server.");
        base.OnConnectedToMaster();
        Photon.Realtime.RoomOptions roomOptions = new Photon.Realtime.RoomOptions();
        roomOptions.MaxPlayers = 10;
        roomOptions.IsVisible = true;
        roomOptions.IsOpen = true;

        PhotonNetwork.JoinOrCreateRoom("Room 1", roomOptions, TypedLobby.Default);  
    }

    public override void OnJoinedRoom()
    {
        string roomName = PhotonNetwork.CurrentRoom.Name;
        Debug.Log("Joined a Room" + roomName);
        //m_screenText.text = "Joined room with name " + roomName;
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log("A new player joined the room");
        base.OnPlayerEnteredRoom(newPlayer);
    }

    IEnumerator InstantiateNetworkedAvatarOnceInRoom()
    {
        while (PhotonNetwork.InRoom == false)
        {
            //Debug.Log("Waiting to be in room before intantiating avatar");
            yield return null;
        }
        InstantiateNetworkedAvatar();
    }

    void InstantiateNetworkedAvatar()
    {
        Int64 userId = Convert.ToInt64(m_userId);
        object[] objects = new object[1] { userId };
        myAvatar = PhotonNetwork.Instantiate("NetworkPlayer", _spawnPoint.transform.position, Quaternion.identity, 0, objects);  //_spawnPoint.transform.position
        //m_camera.transform.SetParent(myAvatar.transform);
    }

    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        PhotonNetwork.Destroy(myAvatar);
    }
}