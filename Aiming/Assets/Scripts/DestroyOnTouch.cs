using UnityEngine;

public class DestroyOnTouch : MonoBehaviour
{
    public ParticleSystem sphereExplode;
    private float startTime;

    private void Start()
    {
        startTime = Time.time;
    }

    private void Update()
    {
        Destroy(gameObject, 1.5f);
    }

    private void OnMouseDown()
    {
        float RT = Time.time - startTime;
        if (this.gameObject.GetComponent<Renderer>().material.color == Color.red)
        {
            Stats.redCount++;
            Stats.redRTList.Add(RT);
        }
        else
        {
            Stats.greenCount++;
            Stats.greenRTList.Add(RT);
        }
        Deactivate();
    }
    void Deactivate()
    {
        Instantiate(sphereExplode, transform.position, Quaternion.identity);
        this.gameObject.SetActive(false);
    }
}
