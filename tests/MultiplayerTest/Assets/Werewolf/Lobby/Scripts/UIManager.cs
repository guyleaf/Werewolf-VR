using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

public class UIManager : MonoBehaviour
{
    [SerializeField]
    private GameObject _loadingUI;

    [SerializeField]
    private GameObject _avatarUI;

    [SerializeField]
    private GameObject _lobbyUI;

    private void Awake()
    {
        Assert.IsNotNull(_loadingUI);
        Assert.IsNotNull(_avatarUI);
        Assert.IsNotNull(_lobbyUI);
    }

    // Start is called before the first frame update
    private void Start()
    {
        
    }

    // Update is called once per frame
    private void Update()
    {
        
    }
}
