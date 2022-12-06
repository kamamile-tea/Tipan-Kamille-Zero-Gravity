using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyMovement : MonoBehaviour
{
	private Vector2 dir = Vector2.right;
	[SerializeField] Rigidbody2D rigid;
	[SerializeField] float speed;
	[SerializeField] bool isFacingRight = true;
	[SerializeField] private AudioClip popSound;
	[SerializeField] GameObject controller;

	[SerializeField] bool diff = false;

	[SerializeField] float jumpForce = 300.0f;
  [SerializeField] bool isGrounded = true;
	int rand = 0;

	private int points = 30;

	public static Vector2 xy;

	void Start()
    {
			if (controller == null)
	    {
	        controller = GameObject.FindGameObjectWithTag("GameController");
	    }

			if(SceneManager.GetActiveScene().name == "Level3"){
				jumpForce = 600.0f;
			}

		if (rigid == null)
			rigid = GetComponent<Rigidbody2D>();

		InvokeRepeating("Scale", 1f, 1f);

		if(PersistentData.Instance.GetDifficulty() == 1){
			diff = true;
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

		if(SceneManager.GetActiveScene().name == "Level2" || SceneManager.GetActiveScene().name == "Level3"){
			rand = Random.Range(0,10);

			if(isGrounded && rand % 2 == 0){
				Jump();
			}
		}


 	}

	void FixedUpdate()
	{

	}

	void Flip()
	{
		transform.Rotate(0, 180, 0);
		isFacingRight = !isFacingRight;
	}

	public void Pop()
	{
		SoundManager.instance.PlaySound(popSound);
		Destroy(gameObject);
	}

	public int getPoints(){
		return points;
	}

	public void Scale()
	{
		if (diff)
		{
			points -= 2;
			xy = transform.localScale;
			xy.x += 0.3f;
			xy.y += 0.3f;
		}
		else
		{
			points -= 1;
			xy = transform.localScale;
			xy.x += 0.2f;
			xy.y += 0.2f;
		}

		transform.localScale = xy;

		if (xy.x > 6f)
		{
			Pop();
			Restart();
		}
	}

	void Jump(){
    rigid.velocity = new Vector2(rigid.velocity.x, 0);
    rigid.AddForce(new Vector2(0, jumpForce));
    isGrounded = false;
  }

	private void OnCollisionEnter2D(Collision2D collision){
    if(collision.gameObject.tag == "Ground"){
      isGrounded = true;
    }
  }

	public void Restart()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}



}