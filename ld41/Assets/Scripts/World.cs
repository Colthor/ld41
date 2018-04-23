using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class World : MonoBehaviour {
    public int NumberOfSegmentsEachDir = 300;
    public GameObject WorldSegment;
    public GameObject Sky;
    public GUISkin GuiSkin;

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

        float pos =  x; 
        pos = (pos + NumberOfSegmentsEachDir) % ( NumberOfSegmentsEachDir*2);
        int index = (int)pos;
        if (index < 0) index += NumberOfSegmentsEachDir * 2; //% can give negative answers.

        if(index < 0 || index >= NumberOfSegmentsEachDir * 2)
        {
            Debug.Log("GetUpdraughtAtCoord OOR for input " + x + " -> index " + index);
            return 0;
        }

        return height_scale * UPDRAUGHT_SCALE * m_Updraught[index];

    }


    public float GetHeightAtX(float x)
    {

        float pos = x;
        pos = (pos + NumberOfSegmentsEachDir) % (NumberOfSegmentsEachDir*2);
        int index = (int)pos;
        if (index < 0) index += NumberOfSegmentsEachDir * 2; //% can give negative answers.
        float fraction = pos - (int)pos;

        if (index < 0 || index >= NumberOfSegmentsEachDir * 2)
        {
            Debug.Log("GetHeightAtX OOR for input " + x + " -> index " + index);
            return m_Heights[0];
        }

        return (1f - fraction) * m_Heights[index] + fraction * m_Heights[index+1];

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

        for (int i = 0; i < 61; i += 1)
        {
            float fadeAmt =  (float)(i )/60f;
            //fadeAmt = fadeAmt * fadeAmt;
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
        for (int i = 0; i < 25; i++)
        {
            Vector3 pos = new Vector3(Random.Range(-1f, 1f) * NumberOfSegmentsEachDir, Random.Range(17f, 40f));
            CreateCloud(pos);
        }
    }

    void CreateCloud(Vector3 pos)
    {
        const float CLOUDHALFWIDTH = 1.9f;
        const float CLOUDHALFHEIGHT = 1.3f;
        Vector3 CloudVel = new Vector3(-Random.Range(0.5f, 1.5f),0f,0f);

        for (int i = 0; i < 25; i++)
        {
            float angle = Random.Range(0, 6.2831853f);
            float dist = Random.Range(0.05f, 1.0f);
            Vector3 totalpos = pos + new Vector3(CLOUDHALFWIDTH * Mathf.Sin(angle) * dist, CLOUDHALFHEIGHT * Mathf.Cos(angle) * dist, -5f);
            float size = Random.Range(1.2f, 2f);
            /*byte grey = (byte)Random.Range(128,255);
            byte alpha = (byte)Random.Range(64, 210);
            Color32 col = new Color32(grey, grey, grey, alpha);*/

            float grey = Random.Range(.5f, 1f)*.5f;
            float alpha = Random.Range(.5f, .9f)*.5f;
            Color col = new Color(grey, grey, grey, alpha);

            GetComponent<ParticleSystem>().Emit(totalpos, CloudVel, size, Random.Range(100.0f, 200.0f), col);

        }
    }

    Menu EndMenu;
	// Use this for initialization
	void Start ()
    {
        mainCamera = Camera.main;
        GenerateWorld();

        EndMenu = this.gameObject.AddComponent<Menu>();
        EndMenu.GuiSkin = GuiSkin;
        EndMenu.MenuTop = 500;
        EndMenu.AddButtonItem("All velociraptors dream of flying! Now back to the party!", delegate () { UnityEngine.SceneManagement.SceneManager.LoadScene("SuperVelociraptorParty"); });
    }

    void UpdateParticles(float deltaTime)
    {
        //const float CLOUD_DRAG = 0.5f;
        ParticleSystem ps = GetComponent<ParticleSystem>();
        ParticleSystem.Particle[] particles = new ParticleSystem.Particle[ps.particleCount];

        int count = ps.GetParticles(particles);
        
        for (int i = 0; i < count; i++)
        {
            float pos = ScaleXCoord( particles[i].position.x);
            if (pos != particles[i].position.x)
            {
                //float prev = particles[i].position.x;
                /*+= new Vector3( pos - particles[i].position.x, 0f); */
                particles[i].position  = new Vector3( pos, particles[i].position.y, particles[i].position.z);
                //Debug.Log( prev + " -> " + pos + ", " + particles[i].position.x);
            }

            float newvel = GetUpdraughtAtCoord(pos, particles[i].position.y);;
            if (particles[i].velocity.x == 0) newvel += particles[i].velocity.y + deltaTime;
                 // particles[i].velocity.y + deltaTime * GetUpdraughtAtCoord(pos, particles[i].position.y) * CLOUD_DRAG;
            if (newvel != particles[i].velocity.y)
            {
                particles[i].velocity = new Vector3(particles[i].velocity.x, newvel, particles[i].velocity.z);
            }
            
        }
        ps.SetParticles(particles, count);

    }

    void DrawUpdraughts()
    {
        for(float x = mainCamera.transform.position.x - NumberOfSegmentsEachDir; x < mainCamera.transform.position.x + NumberOfSegmentsEachDir; x +=1f)
        {
            float bottom = GetHeightAtX(x);
            float top = bottom + 20 * GetUpdraughtAtCoord(x, 0f);

            Debug.DrawLine(new Vector3(x, bottom), new Vector3(x, top));
        }

    }

    public void EndGame()
    {
        EndMenu.Enable();
    }

    void AddThermal()
    {
        float x = mainCamera.transform.position.x + Random.Range(-20f, 20f);
        float updraught = GetUpdraughtAtCoord(x, 0);

        if(updraught > 0)
        {
            Vector3 pos = new Vector3(x, GetHeightAtX(x) - 2.5f, 5f);
            Vector3 vel = new Vector3(0f, updraught*1f, 0f);
            float grey = Random.Range(.5f, 1f) * .5f;
            float alpha = Random.Range(.5f, .9f) * .4f;
            Color col = new Color(grey, grey, grey, alpha);

            GetComponent<ParticleSystem>().Emit(pos, vel, .5f, 1f, col);
            Debug.Log("Thermal added at " + pos);
        }

    }
	
	// Update is called once per frame
	void Update ()
    {
        Sky.transform.position = new Vector3(mainCamera.transform.position.x, Sky.transform.position.y, Sky.transform.position.z);
        UpdateParticles(Time.deltaTime);

        if(Debug.isDebugBuild) DrawUpdraughts();

        if(Random.Range(0,1000) == 0)
        {

            Vector3 pos = new Vector3(mainCamera.transform.position.x + Random.Range(0.5f, 1.5f) * NumberOfSegmentsEachDir, Random.Range(17f, 40f));
            CreateCloud(pos);
            Debug.Log("A new cloud appears at " + pos);
        }

        if (Random.Range(0, 50) == 0) AddThermal();
	}
}
