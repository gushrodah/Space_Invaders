#include "AIE.h"

class Cannon{
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

	void Move(float a_TimeStep, float a_Speed);

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
};