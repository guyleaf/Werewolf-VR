namespace Werewolf.Lobby
{
    public class RoomState
    {
        private readonly string _roomId; // room id 
        private readonly int _maxPlayer; // const
        private int _numPlayer;

        public RoomState(string roomId, int numPlayer, int maxPlayer)
        {
            _roomId = roomId;
            _numPlayer = numPlayer;
            _maxPlayer = maxPlayer;
        }

        public string RoomID // only get
        {
            get { return _roomId; }
        }

        public int NumPlayer
        {
            get { return _numPlayer; }
            set { if (_maxPlayer >= value && value >= 0) _numPlayer = value; }
        }

        public int MaxPlayer // only get
        {
            get { return _maxPlayer; }
        }
    }
}
