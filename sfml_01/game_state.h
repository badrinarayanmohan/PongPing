#pragma once
#pragma once

#include <SFML/Graphics.hpp>

class small_state
{
public:
	virtual void Initialize(sf::RenderWindow* window)
	{
	}

	virtual void Update(sf::RenderWindow* window)
	{
	}

	virtual void Render(sf::RenderWindow* window)
	{
	}

	virtual void Destroy(sf::RenderWindow* window)
	{
	}
};

class game_state
{
public:
	game_state()
	{
		this->state = NULL;
	}

	void SetWindow(sf::RenderWindow* window)
	{
		this->window = window;
	}

	void SetState(small_state* state)
	{
		if (this->state != NULL)
		{
			this->state->Destroy(this->window);
		}
		this->state = state;
		if (this->state != NULL)
		{
			this->state->Initialize(this->window);
		}
	}

	void Update()
	{
		if (this->state != NULL)
		{
			this->state->Update(this->window);
		}
	}
	void Render()
	{
		if (this->state != NULL)
		{
			this->state->Render(this->window);
		}
	}

	~game_state()
	{
		if (this->state != NULL)
		{
			this->state->Destroy(this->window);
		}
	}
private:
	sf::RenderWindow* window;
	small_state* state;
};

extern game_state coreState;
extern bool quitGame;
