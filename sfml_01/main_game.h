#pragma once

#include "game_state.h"
#include "playerpaddle.h"
#include "ai_paddle.h"
#include "ball.h"
#include "scoring.h"

class main_game : public small_state
{
public:
	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);
private:
	playerpaddle* player1;
	ai_paddle* player2;
	ball* ballObject;
	Scoring* score1;
	Scoring* score2;
	sf::Text* pausedText;

	sf::Font* font;

	bool paused, enterKey;
};