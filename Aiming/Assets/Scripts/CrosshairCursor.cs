using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrosshairCursor : MonoBehaviour
{
    public Texture2D crossCursor;

    private void Start()
    {
        Vector2 hotSpot = new Vector2(crossCursor.width / 2,  crossCursor.height / 2);
        Cursor.SetCursor(crossCursor, hotSpot, CursorMode.ForceSoftware);
    }
}
