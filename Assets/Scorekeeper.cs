using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class Scorekeeper : MonoBehaviour
{
    [SerializeField] int score;
    [SerializeField] Text scoreText;
    [SerializeField] Text sceneText;
    const int DEFAULT_POINTS = 1;
    const int SCORE_TO_ADVANCE = 10;
    static int level;
    static string playerName;

    // Start is called before the first frame update
    void Start()
    {
        score = PersistentData.Instance.GetScore();
        playerName = PersistentData.Instance.GetName();
        level = SceneManager.GetActiveScene().buildIndex;
        DisplayScore();
        sceneText.text = "Level " + (level);
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void AddPoints(int pointsToAdd)
    {
        score += pointsToAdd;
        PersistentData.Instance.SetScore(score);
        DisplayScore();
        AdvanceLevel();

    }

    public void AddPoints()
    {
        AddPoints(DEFAULT_POINTS);
    }

    public void AdvanceLevel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void DisplayScore()
    {
        scoreText.text = "Welcome " + playerName + " Score: " + score;
    }

    public void ResetScore()
    {
        score = 0;
        PersistentData.Instance.SetScore(score);
        DisplayScore();
    }
}
