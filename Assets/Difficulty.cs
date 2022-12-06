using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Difficulty : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
      

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void setEasy(){
      PersistentData.Instance.SetDifficulty(0);
    }
    public void setMedium(){
      PersistentData.Instance.SetDifficulty(1);
    }
    public void setHard(){
      PersistentData.Instance.SetDifficulty(2);
    }
}
