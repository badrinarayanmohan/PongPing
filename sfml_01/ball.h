#pragma once

#include <SFML/Audio.hpp>
#include "playerpaddle.h"
#include "scoring.h"

class ball : public Entity
{
public:
	ball(Scoring* score1, Scoring* score2, paddle* player1, paddle* player2);
	void Update(sf::RenderWindow* window);
	void Reset(sf::RenderWindow* window);
	~ball();
private:
	Scoring* score1;
	Scoring* score2;
	paddle* player1;
	paddle* player2;

	sf::SoundBuffer* buffer;
	sf::Sound* sound;
};