#include "scoring.h"

Scoring :: Scoring(sf::Font &font, unsigned int size) : sf::Text("scoring: 0", font, size)
{
	this->value = 0;
}

void Scoring::IncrementScore()
{
	this->value += 10;
}

void Scoring::Update()
{
	this->setString("scoring: " + std::to_string(this->value));
}