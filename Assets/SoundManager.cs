using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

using UnityEngine.UI;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance { get; private set; }
    private AudioSource source;
    [SerializeField] Slider volumeSlider;

    private void Awake()
    {
        source = GetComponent<AudioSource>();
        instance = this;
    }

    public void PlaySound(AudioClip s)
    {
        source.PlayOneShot(s);
    }
    // Start is called before the first frame update
    void Start(){
      if(SceneManager.GetActiveScene().name == "Settings"){
        if(!PlayerPrefs.HasKey("musicVolume")){
          PlayerPrefs.SetFloat("musicVolume", 1);
          Load();
        }
        else{
          Load();
        }
      }
    }

    public void ChangeVolume(){
      AudioListener.volume = volumeSlider.value;
      Save();
    }

    public void Load(){
      volumeSlider.value = PlayerPrefs.GetFloat("musicVolume");
    }

    public void Save(){
      PlayerPrefs.SetFloat("musicVolume", volumeSlider.value);
    }

}
