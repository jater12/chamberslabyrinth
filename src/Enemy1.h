#ifndef ENEMY1_H
#define ENEMY1_H
#include "Enemies.h"

class Enemy1 : public Enemies
{
private:

public:
	Enemy1();

	virtual void update(float time);
	//void onHeroDetected(Hero* hero); // if it responds differently
};

#endif