using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonFunctions : MonoBehaviour
{
    [SerializeField] InputField playerNameInput;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void PlayGame()
    {
        string inName = playerNameInput.text;
        PersistentData.Instance.SetName(inName);
        PersistentData.Instance.SetScore(0);
        SceneManager.LoadScene("Difficulty");
    }

    public void Level1()
    {
        SceneManager.LoadScene("Level1");

    }

    public void Instructions()
    {
        SceneManager.LoadScene("Instructions");

    }

    public void Menu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void HighScores()
    {
        SceneManager.LoadScene("HighScores");
    }

    public void Settings()
    {
        SceneManager.LoadScene("Settings");
    }
}
