using Photon.Pun;

namespace Werewolf.Lobby
{
    public class NetworkLobbyState : BaseLobbyState
    {
        public override void EnsureState(LobbyManager manager, UICollection uICollection)
        {
            uICollection.LoadingUI.SetActive(true);
            uICollection.AvatarUI.SetActive(false);
            uICollection.LobbyUI.SetActive(false);

            PhotonNetwork.ConnectUsingSettings();
        }

        public override void OnConnectedToMaster(LobbyManager manager, UICollection uICollection)
        {
            PhotonNetwork.JoinLobby();
        }
    }
}