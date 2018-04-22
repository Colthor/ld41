using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hangglider : MonoBehaviour
{

    public World theWorld;

    Camera m_MainCamera;
    Rigidbody2D m_MyBody;
    float m_Facing = 1f;

	// Use this for initialization
	void Start ()
    {
        m_MainCamera = Camera.main;
        m_MyBody = GetComponent<Rigidbody2D>();
        m_MyBody.velocity = new Vector3(5f, 0f, 0f);
	}

    private void FixedUpdate()
    {
        const float LIFT_PER_VEL = 0.175f;
        const float UPDRAUGHT_FACTOR = 7.0f;
        const float CHANGE_DIR_FACTOR = 0.25f;
        const float CONTROL_FUDGE_FACTOR = 3.0f;
        float updraught = UPDRAUGHT_FACTOR * theWorld.GetUpdraughtAtCoord(transform.position.x, transform.position.y);
        Vector2 forward = m_MyBody.GetRelativeVector(new Vector2(1f, 0f));
        Vector2 up = m_MyBody.GetRelativeVector(new Vector2(0f, m_Facing));
        Vector2 vel = m_MyBody.velocity;
        float speedSquared = Mathf.Min(64f, vel.SqrMagnitude());

        float dir = Mathf.Sign(forward.x);

        //if (Mathf.Abs(speed) < 1f) speed = Mathf.Sign(speed) * speed * speed; //So that things don't go silly when speed is very small.

        float VelDotForward = Vector2.Dot(forward, vel.normalized);
        float VelDotUp = Vector2.Dot(up, vel.normalized);

        float angle = Vector2.SignedAngle(forward, vel);

        float liftAmt = 0f;
        /*if(Mathf.Abs(angle) < 90)*/ liftAmt =  VelDotForward * speedSquared * LIFT_PER_VEL;

        float ChangeDirAmt =  -VelDotUp * speedSquared * CHANGE_DIR_FACTOR;

        Vector2 ChangeDir = ChangeDirAmt * up;

        Vector2 UpdraughtVec = new Vector2(0f,  Mathf.Abs(forward.x) * updraught);

        Vector2 bodyForces = UpdraughtVec + liftAmt * up + ChangeDir;


        m_MyBody.AddForce(bodyForces);
        float CorrectTorque = 0f;
        if (Mathf.Abs(angle) < 90f  && ((-1 == dir && angle > 0f) || (1 == dir && angle < 0f)))
        { 
            CorrectTorque = (angle / 1800f) * Mathf.Max(10.0f, speedSquared);
            m_MyBody.AddTorque(CorrectTorque);
        }

        if(Debug.isDebugBuild)
        {
            Debug.DrawLine(transform.position, transform.position + new Vector3(bodyForces.x, bodyForces.y), Color.yellow);
            Debug.DrawLine(transform.position, transform.position + new Vector3(ChangeDir.x, ChangeDir.y), Color.green);
            Debug.DrawLine(transform.position, transform.position + new Vector3(UpdraughtVec.x, UpdraughtVec.y), Color.grey);
            Debug.DrawLine(transform.position, transform.position + new Vector3(vel.x, vel.y), Color.black);
            Debug.DrawLine(transform.position + new Vector3(0f, -4f), transform.position + new Vector3(CorrectTorque, -4f), Color.cyan);
            Debug.DrawLine(transform.position + new Vector3(0f, -4f), transform.position + new Vector3(0f, (angle/90)-4f), Color.magenta);
            Debug.DrawLine(transform.position, transform.position + new Vector3(up.x, up.y), Color.cyan);
            Debug.DrawLine(transform.position, transform.position + new Vector3(forward.x, forward.y), Color.magenta);
        }


        bool controlling = false;
        if(Input.GetKey(KeyCode.UpArrow))
        {
            controlling = true;
            m_MyBody.AddTorque(-1.0f * m_Facing);

            m_MyBody.AddForce(CONTROL_FUDGE_FACTOR * (-up + forward));
        }
        else if(Input.GetKey(KeyCode.DownArrow))
        {
            controlling = true;
            m_MyBody.AddTorque(1.0f * m_Facing);

            m_MyBody.AddForce(CONTROL_FUDGE_FACTOR * (up - forward));
        }

        if(! controlling && dir != m_Facing && (dir * forward.x > 0.4f ))
        {
            m_Facing = dir;
            transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
        }
        
    }

    // Update is called once per frame
    void Update ()
    {
        m_MainCamera.transform.position = new Vector3( this.transform.position.x, this.transform.position.y - 5f, m_MainCamera.transform.position.z);
		
	}

    private void OnCollisionEnter2D(Collision2D collision)
    {
        theWorld.EndGame();
    }
}
