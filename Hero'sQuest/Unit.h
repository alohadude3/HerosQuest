/**
 * Header file for Unit class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef UNIT_H
#define UNIT_H

#include <string>

class Unit
{
	public:
		Unit();
		Unit(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack,int baseDefense, int maxDefense);
		~Unit();
	protected:
		std::string name;
		int health;
		int maxHealth;
		int attack;
		int maxAttack;
		int defense;
		int maxDefense;
};

#endif