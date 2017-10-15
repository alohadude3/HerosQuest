/**
 * Source file for SpecialUnit class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "SpecialUnit.h"

using namespace std;

int SpecialUnit::count = 0;

/** Empty constructor */
SpecialUnit::SpecialUnit()
{
	count += 1;
}

/** Constructor with attributes as parameters */
SpecialUnit::SpecialUnit(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense,
	int baseSpecialAttack, int maxSpecialAttack, int specials) :
	Unit(name, baseHealth, maxHealth, baseAttack, maxAttack, baseDefense, maxDefense)
{
	specialAttack = baseSpecialAttack;
	this->maxSpecialAttack = maxSpecialAttack;
	this->specials = specials;
	count += 1;
}

/** Destructor */
SpecialUnit::~SpecialUnit()
{
	count -= 1;
}

/** Returns the value of the special attack then reduces the amount of specials remaining */
int SpecialUnit::performSpecial()
{
	specials -= 1;
	return specialAttack + performAttack();
}

/** Setter for special attack */
void SpecialUnit::setSpecialAttack(int specialAttack)
{
	this->specialAttack = specialAttack;
	if (this->specialAttack > maxSpecialAttack)
	{
		this->specialAttack = maxSpecialAttack;
	}
}

/** Getter for special attack */
int SpecialUnit::getSpecialAttack()
{
	return specialAttack;
}

/** Setter for max special attack */
void SpecialUnit::setMaxSpecialAttack(int maxSpecialAttack)
{
	this->maxSpecialAttack = maxSpecialAttack;
}

/** Getter for max special attack */
int SpecialUnit::getMaxSpecialAttack()
{
	return maxSpecialAttack;
}

/** Setter for number of specials available */
void SpecialUnit::setSpecials(int specials)
{
	this->specials = specials;
}

/** Getter for number of specials available */
int SpecialUnit::getSpecials()
{
	return specials;
}