using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wizardMovement : MonoBehaviour {

	public float moveSpeed;

	private Rigidbody2D my Rigidbody;

	public bool isWalking;


	public float walkTime;
	private float walkCounter;
	public float waitTime;
	private float waitCounter;

	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> ();
			
		waitCounter = waitTime;
		walkCounter = walkTime;
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
