#pragma once
#include "State.h"

class Game
{
private:
	//variables
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;

	//Initialization
	void initWindow();
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

