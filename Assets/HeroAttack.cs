using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

public class HeroAttack : MonoBehaviour
{
    [SerializeField] private float cooldown;
    [SerializeField] public Transform shootingPos;
    [SerializeField] public GameObject arrows;
    [SerializeField] private AudioClip gulpSound;
    private Movement movement;
    public Scorekeeper score;
    private float cdTimer = 999;

    private void Awake()
    {
        movement = GetComponent<Movement>();
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F) && cdTimer > cooldown && movement.canAttack()) {
            Attack();
        }
        cdTimer += Time.deltaTime;
    }

    private void Attack()
    {
        Instantiate(arrows, shootingPos.position, transform.rotation);
        cdTimer = 0;

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            SoundManager.instance.PlaySound(gulpSound);
            Destroy(gameObject);
            SceneManager.LoadScene("Lose");
        }

    }
}
