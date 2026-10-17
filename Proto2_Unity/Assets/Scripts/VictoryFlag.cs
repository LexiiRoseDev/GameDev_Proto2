using UnityEngine;

public class VictoryFlag : MonoBehaviour
{
    public GameObject VictoryScreen;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.CompareTag("Player"))
        {
            VictoryScreen.SetActive(true);
            Time.timeScale = 0f; 
            Debug.Log("You Win!"); // Debug 
        }
    }
}