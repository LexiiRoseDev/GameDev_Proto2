using UnityEngine;

public class VictoryFlag : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {

            Debug.Log("YOU WIN");
        }
    }
}