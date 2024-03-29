#include "AIE.h"
#include "Bullet.h"
#include "Entity.h"

#ifndef _CANNON_H_
#define _CANNON_H_

const int MAX_BULLETS = 20;

class Cannon: public Entity{
public:
	void SetSize(float a_width, float a_height);
	void SetPosition(float a_x, float a_y);
	void SetMovementKeys(unsigned int a_moveLeft, unsigned int a_moveRight);
	void SetMoveExtremes(unsigned int a_min, unsigned int a_max);
	void SetSpriteID(unsigned int sprideID);

	unsigned int GetSpriteID();
	float GetX();
	float GetY();
	float GetWidth();
	float GetHeight();

	virtual void Move(float delta);
	virtual void Draw();

	Bullet bullets[MAX_BULLETS];
	void Shoot(unsigned int textureID);
	Bullet& GetInactiveBullet();

	int GetSpeed();
	

	Cannon();
	~Cannon();

private:
	unsigned int spriteId;
	unsigned int iMoveLeftKey;
	unsigned int iMoveRightKey;
	unsigned int min;
	unsigned int max;
	float width;
	float height;
	float x;
	float y;
	float currentReloadBulletTime = 0.0f;
	float maxBulletReloadTime = 0.25f;
	int speed = 200;
};

#endif