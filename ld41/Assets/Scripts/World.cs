using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class World : MonoBehaviour {
    public int NumberOfSegmentsEachDir = 100;
    public GameObject WorldSegment;

    void GenerateWorld()
    {
        for(int i = -NumberOfSegmentsEachDir; i < NumberOfSegmentsEachDir; i++)
        {
            Instantiate(WorldSegment, new Vector3( i, 0f, 0f), Quaternion.identity);
        }

    }

	// Use this for initialization
	void Start () {
        GenerateWorld();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
