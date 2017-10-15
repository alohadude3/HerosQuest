/**
 * Source file for Boss class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "Boss.h"

using namespace std;

int Boss::count = 0;

/** Empty constructor */
Boss::Boss()
{
	count += 1;
}

/** Constructor with parameters */
Boss::Boss(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense,
	int baseSpecialAttack, int maxSpecialAttack, int specials) :
	SpecialUnit(name, baseHealth, maxHealth, baseAttack, maxAttack, baseDefense, maxDefense,
		baseSpecialAttack, maxSpecialAttack, specials)
{
	count += 1;
}

/** Destructor */
Boss::~Boss()
{
	count -= 1;
}

/**
 * Decides randomly if the boss will perform a special
 * Probability for returning true (thus performing a special attack) is 10% at 100%hp and 100% at 10% hp
 * Returns true or false corresponding to the choice
*/
bool Boss::shouldItPerformSpecial()
{
	int value = rand() % 100 + 10;
	return value >= health;
}