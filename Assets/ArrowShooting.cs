using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowShooting : MonoBehaviour
{
  [SerializeField] int speed;
  Rigidbody2D rigid;
  [SerializeField] GameObject controller;

  // Start is called before the first frame update
  void Start()
  {
    if (controller == null)
    {
        controller = GameObject.FindGameObjectWithTag("GameController");
    }

    if (rigid == null)
      rigid = GetComponent<Rigidbody2D>();

    rigid.velocity = transform.right * speed;
  }

  private void OnCollisionEnter2D(Collision2D collision)
  {
      if(collision.gameObject.tag != "Player"){
        Destroy(gameObject);
      }
      EnemyMovement enemy = collision.gameObject.GetComponent<EnemyMovement>();

      if (collision.gameObject.tag == "Enemy")
      {
          if (enemy != null)
          {
              enemy.Pop();
              controller.GetComponent<Scorekeeper>().AddPoints(enemy.getPoints());
          }

      }

  }
}
