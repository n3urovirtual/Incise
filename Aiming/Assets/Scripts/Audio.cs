using UnityEngine;

public class Audio : MonoBehaviour
{
    public AudioSource shot;

    private void Update()
    {
        if (SpawnManager.spawnStarted && SpawnManager.clickCounter >1)
        {
            if (Input.GetMouseButtonDown(0))
            {
                shot.Play();
            }
        }
    }
}
