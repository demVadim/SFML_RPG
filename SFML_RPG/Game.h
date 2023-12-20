#pragma once
#include "GameState.h"

class Game
{
private:
	//variables
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initStates();
public:
	//Constructor/Destructor 
	Game();
	virtual ~Game();

	//Function
	void updateDt();
	void updateSFMLEvents();
	void update();
	void render();
	void run();
};

