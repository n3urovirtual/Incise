using System.Collections;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject[] myObjects;
    public int maxSpawnObjects = 10;
    private int spawnedObjects;
    public bool showResults = false;
    public int greenTotalNum;
    public int redTotalNum;
    public string scoreDisplay;
    public GameObject instructions;

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            instructions.SetActive(false);

            if (!IsInvoking("Spawn"))
            {
                InvokeRepeating("Spawn", 0.5f, 0.91f);
            }
        }
        if (spawnedObjects == maxSpawnObjects)
        {
            CancelInvoke();
            StartCoroutine(DestroyObjects("spheres"));
        }
    }

    private void Spawn()
    {
        int RandomIndex = 0;
        float probability = Random.Range(0, 100);
        if (probability < 80)
        {
            RandomIndex = 0;
        }
        else if (probability > 80)
        {
            RandomIndex = 1;
        }

        Vector3 randomSpawnPosition = new Vector3(Random.Range(0f, 6.0f), Random.Range(0.5f, 2.5f), 0f) + transform.position;
        GameObject instance = Instantiate(myObjects[RandomIndex], randomSpawnPosition, Quaternion.identity);

        if (instance.GetComponent<Renderer>().material.color == Color.green)
        {
            greenTotalNum++;
        }
        else
        {
            redTotalNum++;
        }
        spawnedObjects++;
        scoreDisplay = spawnedObjects + "/" + maxSpawnObjects;
    }

    IEnumerator DestroyObjects(string tag)
    {
        yield return new WaitForSeconds(3);
        GameObject[] spheres = GameObject.FindGameObjectsWithTag("sphere");
        foreach (GameObject sphere in spheres)
        {
            GameObject.Destroy(sphere);
        }
        showResults = true;
    }
}