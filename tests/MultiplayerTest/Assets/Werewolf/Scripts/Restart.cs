using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Werewolf.Game;

public class Restart : MonoBehaviour
{
	public GameObject buttonRestart, endGameUI;
	private int buttonNum = 0; //defacult skip
	private GameManager _gm;

	void Start()
	{
		buttonRestart = GameObject.Find("Button-Lobby");
		Button btnRestart = buttonRestart.GetComponent<Button>();
		btnRestart.onClick.AddListener(TaskOnClickEnter);

		endGameUI = GameObject.Find("EndGame UI");

		_gm = GameObject.FindObjectOfType<GameManager>();
	}

	void TaskOnClick(int num)
	{
		Debug.Log($"You have clicked the button! {num} ");
		buttonNum = num;
	}

	void TaskOnClickEnter()
	{
		Debug.Log($"Enter Lobby, restart!");
		endGameUI.SetActive(false);
		_gm.endGame = false;
		_gm.playerList = new() { 0, 1, 2, 3, 4, 5, 6 };
		_gm.Awake();
		_gm.dayTurn = false;
		_gm.timer = 0;
		//_gm.lobbyButton.SetActive(false);
		//_gm.CallRpcSendMyVote(_gm.actorNumber, buttonNum);
		buttonNum = 0; //defacult skip
	}
}
