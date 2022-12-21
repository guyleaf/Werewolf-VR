public class RoomState
{
    private int _roomId; // room id 
    private const int _maxPlayer = 6; // const
    private int _numPlayer;
    public RoomState(int roomId, int numPlayer)
    {
        _roomId = roomId;
        _numPlayer = numPlayer;
    }

    public int RoomID // only get
    {
        get { return _roomId; }
    }

    public int numPlayer
    {
        get { return _numPlayer; }
        set { if(_maxPlayer >= value && value >= 0) _numPlayer = value; }
    }

    public int maxPlayer // only get
    {
        get { return _maxPlayer; }
    }
}
