/**
 * Header file for Hero class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef HERO_H
#define HERO_H

#include "Unit.h"
#include "SpecialAttack.h"

class Hero : public Unit, public SpecialAttack
{
	public:
		Hero(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack,
			int baseDefense, int maxDefense, int baseSpecialAttack, int maxSpecialAttack, int startingMoney);
		~Hero();
	private:
		int money;
};

#endif