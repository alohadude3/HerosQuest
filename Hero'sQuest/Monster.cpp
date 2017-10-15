/**
 * Source file for Monster class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "Monster.h"

using namespace std;

int Monster::count = 0;

/** Empty constructor */
Monster::Monster()
{
	count += 1;
}

/** Constructor with parameters */
Monster::Monster(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack,int baseDefense, int maxDefense) :
	Unit(name, baseHealth, maxHealth, baseAttack, maxAttack, baseDefense, maxDefense)
{
	count += 1;
}

/** Destructor */
Monster::~Monster()
{
	count -= 1;
}