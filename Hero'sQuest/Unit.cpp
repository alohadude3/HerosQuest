/**
 * Source file for Unit class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include <ctime> //time
#include <iostream>
#include "Unit.h"

using namespace std;

int Unit::count = 0;

/** Empty constructor */
Unit::Unit()
{
	count += 1;
}

/** Constructor with attributes as parameters */
Unit::Unit(string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense)
{
	this->name = name;
	health = baseHealth;
	this->maxHealth = maxHealth;
	attack = baseAttack;
	this->maxAttack = maxAttack;
	defense = baseDefense;
	this->maxDefense = maxDefense;
	count += 1;
}

/** Destructor */
Unit::~Unit()
{
	count -= 1;
}

/** Returns an int of a damage value */
int Unit::performAttack()
{
	int attackValue = attack;
	attackValue += rand() % 6 + 1;
	return attackValue;
}

/** The unit attempts to defend from an incoming attack with a value damage */
void Unit::defend(int attackValue)
{
	int defenseValue = defense;
	defenseValue += rand() % 6 + 1;
	if (attackValue > defenseValue)
	{
		health -= (attackValue - defenseValue);
	}
	if (health < 0)
	{
		health = 0;
	}
}

/** Setter for unit's name */
void Unit::setName(string name)
{
	this->name = name;
}

/** Getter for unit's name */
string Unit::getName()
{
	return name;
}

/** Setter for unit's health */
void Unit::setHealth(int health)
{
	this->health = health;
	if (this->health > maxHealth)
	{
		this->health = maxHealth;
	}
}

/** Getter for unit's health */
int Unit::getHealth()
{
	return health;
}

/** Setter for unit's max health */
void Unit::setMaxHealth(int maxHealth)
{
	this->maxHealth = maxHealth;
}

/** Getter for unit's max health */
int Unit::getMaxHealth()
{
	return maxHealth;
}

/** Setter for unit's attack */
void Unit::setAttack(int attack)
{
	this->attack = attack;
	if (this->attack > maxAttack)
	{
		this->attack = maxAttack;
	}
}

/** Getter for unit's attack */
int Unit::getAttack()
{
	return attack;
}

/** Setter for unit's max attack */
void Unit::setMaxAttack(int maxAttack)
{
	this->maxAttack = maxAttack;
}

/** Getter for unit's max attack */
int Unit::getMaxAttack()
{
	return maxAttack;
}


/** Setter for unit's defense */
void Unit::setDefense(int defense)
{
	this->defense = defense;
	if (this->defense > maxDefense)
	{
		this->defense = maxDefense;
	}
}

/** Getter for unit's defense */
int Unit::getDefense()
{
	return defense;
}

/** Setter for unit's max defense */
void Unit::setMaxDefense(int maxDefense)
{
	this->maxDefense = maxDefense;
}

/** Getter for unit's max defense */
int Unit::getMaxDefense()
{
	return maxDefense;
}