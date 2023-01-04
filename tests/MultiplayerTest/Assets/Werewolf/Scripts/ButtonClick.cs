using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Werewolf.Game;
using Photon.Pun;

namespace VoteUI.Btn
{
	public class ButtonClick : MonoBehaviour
	{
		public GameObject button1, button2, button3, button4, button5, button6, buttonSkip, buttonOK, voteUI;

        public GameObject selectedFrame;

		private int buttonNum = 0; //defacult skip
		private Button btn1, btn2, btn3, btn4, btn5, btn6;
		private GameManager _gm;

		void Start()
		{
            selectedFrame = GameObject.Find("Selected Frame");

			button1 = GameObject.Find("ButtonCircle1");
			btn1 = button1.GetComponent<Button>();
			btn1.onClick.AddListener(delegate () { TaskOnClick(1); });

			button2 = GameObject.Find("ButtonCircle2");
			btn2 = button2.GetComponent<Button>();
			btn2.onClick.AddListener(delegate () { TaskOnClick(2); });

			button3 = GameObject.Find("ButtonCircle3");
			btn3 = button3.GetComponent<Button>();
			btn3.onClick.AddListener(delegate () { TaskOnClick(3); });
			//btn3.interactable = false;

			button4 = GameObject.Find("ButtonCircle4");
			btn4 = button4.GetComponent<Button>();
			btn4.onClick.AddListener(delegate () { TaskOnClick(4); });

			button5 = GameObject.Find("ButtonCircle5");
			btn5 = button5.GetComponent<Button>();
			btn5.onClick.AddListener(delegate () { TaskOnClick(5); });

			button6 = GameObject.Find("ButtonCircle6");
			btn6 = button6.GetComponent<Button>();
			btn6.onClick.AddListener(delegate () { TaskOnClick(6); });

			//buttonSkip = GameObject.Find("ButtonCircleSkip");
			//Button btnSkip = buttonSkip.GetComponent<Button>();
			//btnSkip.onClick.AddListener(delegate () { TaskOnClick(0); });  // skip button

			buttonOK = GameObject.Find("ButtonCircleOK");
			Button btnOK = buttonOK.GetComponent<Button>();
			btnOK.onClick.AddListener(TaskOnClickEnter);

			voteUI = GameObject.Find("Vote UI");
			//voteUI.SetActive(true);

			_gm = GameObject.FindObjectOfType<GameManager>();
		}

        void OnEnable()
        {
            buttonNum = 0; //defacult skip
            selectedFrame.SetActive(false);
        }

		void TaskOnClick(int num)
		{
			Debug.Log($"You have clicked the button! {num} ");
			buttonNum = num;
            switch (num)
            {
                case 1:
                    button1.GetComponent<SelectedVisual>().Selected();
                    break;
                case 2:
                    button2.GetComponent<SelectedVisual>().Selected();
                    break;
                case 3:
                    button3.GetComponent<SelectedVisual>().Selected();
                    break;
                case 4:
                    button4.GetComponent<SelectedVisual>().Selected();
                    break;
                case 5:
                    button5.GetComponent<SelectedVisual>().Selected();
                    break;
                case 6:
                    button6.GetComponent<SelectedVisual>().Selected();
                    break;
            }
		}

		void TaskOnClickEnter()
		{
			Debug.Log($"Enter button! {buttonNum} ");
			voteUI.SetActive(false);
			_gm.voted = true;
			_gm.CallRpcSendMyVote(PhotonNetwork.LocalPlayer.ActorNumber, buttonNum);
			buttonNum = 0; //defacult skip
		}

		public void ButtonDisable(int num)
		{
            switch (num)
            {
                case 1:
                    btn1.interactable = false;
                    break;
                case 2:
                    btn2.interactable = false;
                    break;
                case 3:
                    btn3.interactable = false;
                    break;
                case 4:
                    btn4.interactable = false;
                    break;
                case 5:
                    btn5.interactable = false;
                    break;
                case 6:
                    btn6.interactable = false;
                    break;
            }
			Debug.Log($"buttonNum disable: {num}");
		}

		private void ButtonEnable()
		{
			btn1.interactable = true;
			btn2.interactable = true;
			btn3.interactable = true;
			btn4.interactable = true;
			btn5.interactable = true;
			btn6.interactable = true;
		}
	}
}

