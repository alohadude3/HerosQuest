/**
 * Source file for Hero class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "Hero.h"

using namespace std;

/** Constructor with name as parameter */
Hero::Hero(string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense,
	int maxDefense, int baseSpecialAttack, int maxSpecialAttack, int startingMoney) :
	Unit(name, baseHealth, maxHealth, baseAttack, maxAttack, baseDefense, maxDefense),
	SpecialAttack(baseSpecialAttack, maxSpecialAttack)
{
	money = startingMoney;
}

/** Destructor */
Hero::~Hero()
{

}