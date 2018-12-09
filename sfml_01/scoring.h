#pragma once

#include <SFML/Graphics.hpp>

class Scoring : public sf::Text
{
public:
	Scoring(sf::Font &font, unsigned int size);
	void IncrementScore();
	void Update();
private:
	int value;
};