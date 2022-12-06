using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipMovement : MonoBehaviour
{
  private Vector2 dir = Vector2.right;
	[SerializeField] Rigidbody2D rigid;
	[SerializeField] float speed;

	public static Vector2 xy;

	void Start(){
		if (rigid == null)
			rigid = GetComponent<Rigidbody2D>();

    if(PersistentData.Instance.GetDifficulty() == 2){
      gameObject.tag  = "Enemy";
    }

  }
	void Update()
	{
      	transform.Translate(dir*speed*Time.deltaTime);

      	if(transform.position.x <= -5) {
           	dir = Vector2.right;
		}
      	if (transform.position.x >= 5) {
           	dir = Vector2.left;
		}

 	}

	void FixedUpdate()
	{

	}


}
