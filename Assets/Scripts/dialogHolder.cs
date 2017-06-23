using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dialogHolder : MonoBehaviour {

	public string dialogue;
	private DialogueManager dMAn;

	// Use this for initialization
	void Start () {
		dMAn = FindObjectOfType<DialogueManager> ();
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerStay2D(Collision2D other)
	{
		if(other.gameObject.name == "Player")
		{
			if(Input.GetKeyDown(KeyCode.Space))
			{
				dMAn.ShowBox (dialogue);
			}
		}
	}
}
