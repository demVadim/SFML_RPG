#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>

#include"SFML/System.hpp"
#include"SFML/Window.hpp"
#include"SFML/Graphics.hpp"
#include"SFML/Audio.hpp"
#include"SFML/Network.hpp"

class Game
{
private:
	//variables
	sf::RenderWindow window;

	//Initialization
	void initWindow();
public:
	//Constructor/Destructor 
	Game();
	virtual ~Game();

	//Function
	void updateSFMLEvents();
	void update();
	void render();
	void run();
};

