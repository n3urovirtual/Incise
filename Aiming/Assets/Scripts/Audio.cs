using UnityEngine;

public class Audio : MonoBehaviour
{
    public AudioSource shot;

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            shot.Play();
        }
    }

}
