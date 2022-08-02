using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using TMPro;

public class Stats : MonoBehaviour
{
    public TextMeshProUGUI goRtTxt;
    public TextMeshProUGUI nogoRtTxt;
    public TextMeshProUGUI goAccTxt;
    public TextMeshProUGUI nogoAccTxt;
    public TextMeshProUGUI spawnedObjectsTxt;
    public GameObject goCircle;
    public GameObject nogoCircle;
    public static int greenCount;
    public static int redCount;
    public static List<float> greenRTList = new List<float>();
    public static List<float> redRTList = new List<float>();
    private SpawnManager SpawnManagerScript;

    private void Start()
    {
        SpawnManagerScript = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();
        greenCount = 0;
        redCount = 0;
    }
    private void Update()
    {
        spawnedObjectsTxt.text = SpawnManagerScript.scoreDisplay;

        if (SpawnManagerScript.showResults)
        {
            DisplayStats();
        }
    }

    private void DisplayStats()
    {
        goCircle.SetActive(true);
        if (greenRTList.Count != 0)
        {
            goRtTxt.text = greenRTList.Average().ToString("F3");
            goAccTxt.text = (greenCount * 100 / SpawnManagerScript.greenTotalNum).ToString() + " %";
        }

        nogoCircle.SetActive(true);
        if (redRTList.Count != 0)
        {
            nogoRtTxt.text = redRTList.Average().ToString("F3");
            nogoAccTxt.text = (redCount * 100 / SpawnManagerScript.redTotalNum).ToString() + " %";
        }
    }
}
