using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PersistentData : MonoBehaviour
{
    [SerializeField] string playerName;
    [SerializeField] int playerScore;
    [SerializeField] int gameDifficulty;

    public static PersistentData Instance;

    public void Awake()
    {
        if (Instance == null)
        {
            DontDestroyOnLoad(this);
            Instance = this;
        }
        else
            Destroy(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        playerName = "";
        playerScore = 0;
        gameDifficulty = 0;
    }

    public void SetName(string name)
    {
        playerName = name;
    }
    public void SetScore (int score)
    {
        playerScore = score;
    }
    public void SetDifficulty (int difficulty)
    {
        gameDifficulty = difficulty;
    }

    public string GetName()
    {
        return playerName;
    }

    public int GetScore()
    {
        return playerScore;
    }
    public int GetDifficulty()
    {
        return gameDifficulty;
    }
    // Update is called once per frame
    void Update()
    {

    }
}