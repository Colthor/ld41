﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class World : MonoBehaviour {
    public int NumberOfSegmentsEachDir = 300;
    public GameObject WorldSegment;

    Camera mainCamera;

    float[] m_Heights;
    float[] m_Updraught;
    float m_ReallyBigMag, m_ReallyBigFreq, m_BigMag, m_BigFreq, m_MedMag, m_MedFreq, m_SmallMag, m_SmallFreq;

    public float ScaleXCoord(float x)
    {
        float ret = x;
        float diff = x - mainCamera.transform.position.x;

        float WorldWidth = NumberOfSegmentsEachDir * 2f;

        while (diff > WorldWidth/2)
        {
            ret-=WorldWidth;
            diff -= WorldWidth;
        }
       while (diff < -WorldWidth/2)
        {
            ret +=WorldWidth;
            diff += WorldWidth;
        }

        return ret;
    }

    public float GetUpdraughtAtCoord(float x, float y)
    {
        const float UPDRAUGHT_SCALE = 2.0f;
        float height_scale = Mathf.Max(1.0f, Mathf.Min(0.0f, (1000 - (y - 100f)) * 0.001f));

        float pos = x;// ScaleXCoord(x);
        pos = pos % (2 * NumberOfSegmentsEachDir);
        int index = (int)pos + NumberOfSegmentsEachDir;

        return height_scale * UPDRAUGHT_SCALE * m_Updraught[index];

    }

    void CalculateUpdraughts()
    {
        m_Updraught = new float[NumberOfSegmentsEachDir * 2];

        for (int i = 0; i < NumberOfSegmentsEachDir * 2; i += 1)
        {
            m_Updraught[i] = Mathf.Max(0, Mathf.Tan(m_Heights[i + 1] - m_Heights[i]));
           // Debug.Log(i + ": " + m_Updraught[i]);
        }

    }

    void GenerateHeightmap()
    {
        m_Heights = new float[NumberOfSegmentsEachDir * 2 + 1];
        m_ReallyBigMag = Random.Range(5.5f, 10.25f);
        m_ReallyBigFreq = Random.Range(90f, 133f);
        m_BigMag = Random.Range(5.5f, 10.25f);
        m_BigFreq = Random.Range(43f, 63f);
        m_MedMag = Random.Range(2.5f, 4.25f);;
        m_MedFreq = Random.Range(12f, 20f);
        m_SmallMag = Random.Range(0.95f, 1.95f);;
        m_SmallFreq = Random.Range(5f, 9f);
        
        for(int i = 0; i < NumberOfSegmentsEachDir*2 + 1; i+=1)
        {
            m_Heights[i] = GenerateHeightAtX(i - NumberOfSegmentsEachDir);
        }

        float fadeTo = 0.5f * (m_Heights[NumberOfSegmentsEachDir * 2] + m_Heights[0]);

        for (int i = 0; i < 31; i += 1)
        {
            float fadeAmt =  (float)(i )/30f;
            //Debug.Log(fadeAmt);
            m_Heights[i] = fadeAmt * m_Heights[i] + (1f - fadeAmt) * fadeTo;
            int j = NumberOfSegmentsEachDir * 2 - i;
            m_Heights[j] = fadeAmt * m_Heights[j] + (1f - fadeAmt) * fadeTo;

        }
        CalculateUpdraughts();
    }

    float GenerateHeightAtX(float x)
    {
        return (m_ReallyBigMag * Mathf.Cos(x / m_ReallyBigFreq) + m_BigMag * Mathf.Sin(x / m_BigFreq) + m_MedMag * Mathf.Cos(x / m_MedFreq) + m_SmallMag * Mathf.Sin(x / m_SmallFreq));
    }

    float GetHeight(int x)
    {
        return m_Heights[x + NumberOfSegmentsEachDir];

    }

    void GenerateWorld()
    {
        GenerateHeightmap();

        for(int i = -NumberOfSegmentsEachDir; i < NumberOfSegmentsEachDir; i+=1)
        {
            WorldSegment ws = Instantiate(WorldSegment, new Vector3( i, 0f, 0f), Quaternion.identity).GetComponent<WorldSegment>();

            ws.SetHeights(GetHeight(i), GetHeight(i+1));
        }

        //create initial clouds
        for (int i = 0; i < 50; i++)
        {
            Vector3 pos = new Vector3(Random.Range(-1f, 1f) * NumberOfSegmentsEachDir, Random.Range(28f, 100f));
            CreateCloud(pos);
        }
    }

    void CreateCloud(Vector3 pos)
    {
        const float CLOUDHALFWIDTH = 2.5f;
        const float CLOUDHALFHEIGHT = 1f;
        Vector3 CloudVel = new Vector3(-Random.Range(0.5f, 1.5f),0f,0f);

        for (int i = 0; i < 20; i++)
        {
            float angle = Random.Range(0, 6.2831853f);
            float dist = Random.Range(0.1f, 1.0f);
            Vector3 totalpos = pos + new Vector3(CLOUDHALFWIDTH * Mathf.Sin(angle) * dist, CLOUDHALFHEIGHT * Mathf.Cos(angle) * dist, 0f);
            float size = Random.Range(0.6f, 1.3f);
            /*byte grey = (byte)Random.Range(128,255);
            byte alpha = (byte)Random.Range(64, 210);
            Color32 col = new Color32(grey, grey, grey, alpha);*/

            float grey = Random.Range(.5f, 1f);
            float alpha = Random.Range(.5f, .9f);
            Color col = new Color(grey, grey, grey, alpha);

            GetComponent<ParticleSystem>().Emit(totalpos, CloudVel, size, 100.0f, col);

        }
    }

	// Use this for initialization
	void Start ()
    {
        mainCamera = Camera.main;
        GenerateWorld();
	}

    void UpdateParticles(float deltaTime)
    {
        ParticleSystem ps = GetComponent<ParticleSystem>();
        ParticleSystem.Particle[] particles = new ParticleSystem.Particle[ps.particleCount];

        int count = ps.GetParticles(particles);
        
        for (int i = 0; i < count; i++)
        {
            float pos = ScaleXCoord( particles[i].position.x);
            if (pos != particles[i].position.x)
            {
                //float prev = particles[i].position.x;
                particles[i].position += new Vector3( particles[i].position.x - pos, 0f); //= new Vector3( pos, particles[i].position.y, particles[i].position.z);
                //Debug.Log( prev + " -> " + pos + ", " + particles[i].position.x);
            }

            float accel = deltaTime * GetUpdraughtAtCoord(pos, particles[i].position.y);
            if(accel != 0f)
            {
                particles[i].velocity += new Vector3(0.0f, accel);
            }
            
        }
        ps.SetParticles(particles, count);

    }
	
	// Update is called once per frame
	void Update ()
    {
        UpdateParticles(Time.deltaTime);
	}
}