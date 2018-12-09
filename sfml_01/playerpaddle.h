#pragma once

#include "paddle.h"

class playerpaddle : public paddle
{
public:
	playerpaddle(int playerNumber);
	void Update();
private:
	int playerNumber;
};