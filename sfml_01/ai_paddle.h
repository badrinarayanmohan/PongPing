#pragma once


#include "paddle.h"
#include "ball.h"

class ai_paddle : public paddle
{
public:
	ai_paddle(int playerNumber, int difficulty);
	void SetBall(ball* ballObject);
	void Update();
private:
	ball* ballObject;
	int playerNumber;
	float speed;
};