﻿using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {




    public float fireRate = 0;
    public float Damage = 10;

	public LayerMask whatToHit;
	
	float timeToFire = 0;
	Transform firePoint;

	// Use this for initialization
	void Awake () {
		firePoint = transform.Find ("FirePoint");
		if (firePoint == null) {
			Debug.LogError ("No firePoint? WHAT?!");
		}
	}
	
	// Update is called once per frame
	void Update () {
        
       // float EPSILON = 0;
#pragma warning disable RECS0018 // Comparison of floating point numbers with equality operator
        if (0 == fireRate)
        {
#pragma warning restore RECS0018 // Comparison of floating point numbers with equality operator
            if (Input.GetButtonDown ("Fire1")) {
				Shoot();
                //fireRate == 0
			}
		}
		else {
			if (Input.GetButton ("Fire1") && Time.time > timeToFire) {
				timeToFire = Time.time + 1/fireRate;
				Shoot();
			}
		}
	}
	
	void Shoot () {
		Vector2 mousePosition = new Vector2 (Camera.main.ScreenToWorldPoint (Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y);
		Vector2 firePointPosition = new Vector2 (firePoint.position.x, firePoint.position.y);
		RaycastHit2D hit = Physics2D.Raycast (firePointPosition, mousePosition-firePointPosition, 100, whatToHit);
		Debug.DrawLine (firePointPosition, (mousePosition-firePointPosition)*100, Color.cyan);
		if (hit.collider != null) {
			Debug.DrawLine (firePointPosition, hit.point, Color.red);
			Debug.Log ("We hit " + hit.collider.name + " and did " + Damage + " damage.");
		}
	}
}
