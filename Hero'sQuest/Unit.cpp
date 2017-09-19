/**
 * Source file for Unit class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "Unit.h"

/** Empty constructor */
Unit::Unit()
{

}

/** Constructor with attributes as parameters */
Unit::Unit(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense)
{
	this->name = name;
	health = baseHealth;
	this->maxHealth = maxHealth;
	attack = baseAttack;
	this->maxAttack = maxAttack;
	defense = baseDefense;
	this->maxDefense = maxDefense;
}

/** Destructor */
Unit::~Unit()
{

}