#ifndef CONSTANTS_H
#define CONSTANTS_H

static const int WINDOW_WIDTH = 1280;
static const int WINDOW_HEIGHT = 720;


//Hero
const int HERO_BASE_HP = 100;
const int HERO_BASE_SPEED = 7;
const int HERO_BASE_LEVEL = 1;
const int HERO_BASE_ARMOR = 30;
const int HERO_BASE_DAMAGE = 20;
const int HERO_ARMOR_PER_LEVEL = 9;
const int HERO_DAMAGE_PER_LEVEL = 8;

const float GRAVITY = 80;

//Enemies
const int ENEMY_DETECTION_RADIUS = 200;

const int ENEMY1_BASE_HP = 100;
const int ENEMY1_BASE_SPEED = 3;
const int ENEMY1_DAMAGE = 20;
const int ENEMY1_ARMOR = 10;

const int ENEMY2_BASE_HP = 100;
const int ENEMY2_BASE_SPEED = 2;
const int ENEMY2_DAMAGE = 35;
const int ENEMY2_ARMOR = 15;

//Weapons
const float SPEAR_RANGE = 150;
const float SPEAR_COOLDOWN = 1.;
const float SPEAR_DAMAGE = 15;
const float SPEAR_CRIT_CHANCE = 15;
const float SPEAR_CRIT_MULTIPLIER = 1.5;
const float SPEAR_DMG_FLUCTUATION_RATE = 0.1;

#endif
