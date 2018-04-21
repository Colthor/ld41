using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WrapObject : MonoBehaviour {

    public float WorldWidth = 200.0f;
    Camera mainCamera;
	// Use this for initialization
	void Start () {
        mainCamera = Camera.main;
	}
	
	// Update is called once per frame
	void Update () {
        float diff = this.transform.position.x - mainCamera.transform.position.x;

        if (diff > WorldWidth/2)
        {
            this.transform.Translate( new Vector3( -WorldWidth, 0f, 0f));
        }
        else if (diff < -WorldWidth/2)
        {
            this.transform.Translate( new Vector3( WorldWidth, 0f, 0f));
        }
	}
}
