#include "Game.h"
//Static functions

//Initializer functions
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML_RPG");
}

//Constructor/Destructor 
Game::Game()
{
}

Game::~Game()
{
	delete this->window;
}

//Functions

void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == sf::Event::Closed)
			this->window->close();
	}

}

void Game::update()
{
}

void Game::render()
{
	this->window->clear();

	//Render items
	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->update();
		this->render();
		
	}
}
