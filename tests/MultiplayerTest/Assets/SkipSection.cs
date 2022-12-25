using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Werewolf.Game;

public class SkipSection : MonoBehaviour
{
	// Start is called before the first frame update
	public GameObject buttonSkip;
	private Button btnSkip;
	private GameManager _gm;

	void Start()
	{
		buttonSkip = GameObject.Find("ButtonCircleSkipSection");
		btnSkip = buttonSkip.GetComponent<Button>();
		btnSkip.onClick.AddListener(delegate () { TaskOnClick(0); });  // skip button

		_gm = GameObject.FindObjectOfType<GameManager>();
	}

	void TaskOnClick(int num)
	{
		Debug.Log($"You have clicked the button! {num} ");
		_gm.timer = _gm.sectionTime;
	}

}
