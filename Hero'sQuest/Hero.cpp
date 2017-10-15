/**
 * Source file for Hero class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "Hero.h"

using namespace std;

/** Empty constructor */
Hero::Hero()
{

}

/** Constructor with name as parameter */
Hero::Hero(string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense,
	int maxDefense, int baseSpecialAttack, int maxSpecialAttack, int maxSpecials, int startingMoney) : 
	SpecialUnit(name, baseHealth, maxHealth, baseAttack, maxAttack, baseDefense, maxDefense, 
		baseSpecialAttack, maxSpecialAttack, maxSpecials)
{
	money = startingMoney;
}

/** Destructor */
Hero::~Hero()
{

}

/** Setter for the hero's money */
void Hero::setMoney(int money)
{
	this->money = money;
}

/** Getter for the hero's money */
int Hero::getMoney()
{
	return money;
}