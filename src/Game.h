#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include "Levels.h"
#include "Hero.h"
#include "Spear.h"
#include "Enemy1.h"

class Game
{
private:
	enum{
		titleScreen, inGame, pause, gameOver
	}GameState;

	sf::RenderWindow window;
	sf::Event event;

	sf::Clock clock;	//Starts the clock
	sf::Time deltaTime;	//Difference in time

	//Camera
	sf::View camera;
	sf::View minimap;


	sf::Font blackcastle;
	sf::Font century;
	sf::Text title;
	sf::Text pressEnter;
	sf::Text pauseText;
	sf::Text pressResume;
    sf::Text youDied;
    sf::Text returnToTitle;

	Levels levels;

	std::vector<Entity * > entityRegistry;

	void update();
	void render();
	void handleEvent(sf::Event);
	void loadAssets();
	void collision(Hero *, sf::FloatRect);
	void titleUpdate();
	void gameUpdate();
	void pauseUpdate();
	void gameOverUpdate();
	void hitCollision(Entity *hero, Entity *enemy);

	static Hero *theHero;
	Entity *spear;
	Entity *enemy;

	void CreateEntities();
public:
	Game();
	void mainLoop();

	static Hero * getHero();
};


#endif
