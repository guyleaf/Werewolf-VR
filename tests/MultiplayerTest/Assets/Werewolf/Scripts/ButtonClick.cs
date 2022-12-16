using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ButtonClick : MonoBehaviour
{
	public GameObject button1, button2, button3, button4, button5, button6, buttonOK, voteUI;
	private Button btn;
	private int buttonNum;

	void Start()
	{
		button1 = GameObject.Find("ButtonCircle1");
		Button btn1 = button1.GetComponent<Button>();
		btn1.onClick.AddListener(delegate() { TaskOnClick(1); });

		button2 = GameObject.Find("ButtonCircle2");
		Button btn2 = button2.GetComponent<Button>();
		btn2.onClick.AddListener(delegate () { TaskOnClick(2); });

		button3 = GameObject.Find("ButtonCircle3");
		Button btn3 = button3.GetComponent<Button>();
		btn3.onClick.AddListener(delegate () { TaskOnClick(3); });

		button4 = GameObject.Find("ButtonCircle4");
		Button btn4 = button4.GetComponent<Button>();
		btn4.onClick.AddListener(delegate () { TaskOnClick(4); });

		button5 = GameObject.Find("ButtonCircle5");
		Button btn5 = button5.GetComponent<Button>();
		btn5.onClick.AddListener(delegate () { TaskOnClick(5); });

		button6 = GameObject.Find("ButtonCircle6");
		Button btn6 = button6.GetComponent<Button>();
		btn6.onClick.AddListener(delegate () { TaskOnClick(6); });

		buttonOK = GameObject.Find("ButtonCircleOK");
		Button btnOK = buttonOK.GetComponent<Button>();
		btnOK.onClick.AddListener(TaskOnClickEnter);

		voteUI = GameObject.Find("Vote UI");
		//voteUI.SetActive(true);
	}

	void TaskOnClick(int num)
	{
		Debug.Log($"You have clicked the button! {num} ");
		buttonNum = num;
	}

	void TaskOnClickEnter()
	{
		Debug.Log($"Enter button! {buttonNum} ");
		voteUI.SetActive(false);
	}
}
