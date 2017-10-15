/**
 * Header file for Hero class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef HERO_H
#define HERO_H

#include "SpecialUnit.h"

class Hero : public SpecialUnit
{
	public:
		Hero();
		Hero(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense,
			int baseSpecialAttack, int maxSpecialAttack, int maxSpecials, int startingMoney);
		~Hero();
		void setMoney(int money);
		int getMoney();
	private:
		int money;
};

#endif