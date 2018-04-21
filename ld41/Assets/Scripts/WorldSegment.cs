using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldSegment : MonoBehaviour {
    public float Segment_Width = 1f;
    public float Segment_Height = 1f;

	// Use this for initialization
	void Start () {
        Vector3[] verts = new Vector3[4];
        Vector3[] normals = new Vector3[4];
        //Vector2[] uv = new Vector2[4];

        int[] tris = new int[6];
        Vector3 towardCamera = new Vector3(0, 0, -1f);

        verts[0] = new Vector3(-0.0f * Segment_Width, -1f, 0.0f);
        verts[1] = new Vector3( 1.0f * Segment_Width, -1f, 0.0f);
        verts[2] = new Vector3(-0.0f * Segment_Width, Random.Range(0.0f, Segment_Height), 0.0f);
        verts[3] = new Vector3( 1.0f * Segment_Width, Random.Range(0.0f, Segment_Height), 0.0f);

        tris[0]  =  0;
        tris[ 1] =  2;
        tris[ 2] =  1;
        tris[ 3] =  1;
        tris[ 4] =  2;
        tris[ 5] =  3;

        normals[0] = towardCamera;
        normals[1] = towardCamera;
        normals[2] = towardCamera;
        normals[3] = towardCamera;
        Mesh mesh = new Mesh();
        mesh.vertices = verts;
        mesh.triangles = tris;
        mesh.normals = normals;
        //mesh.uv = uv;
        GetComponent<MeshFilter>().mesh = mesh;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
