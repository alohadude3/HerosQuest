/**
 * Header file for Boss class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef BOSS_H
#define BOSS_H

#include "SpecialUnit.h"

class Boss : public SpecialUnit
{
	public:
		Boss();
		Boss(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense,
			int baseSpecialAttack, int maxSpecialAttack, int specials);
		~Boss();
		bool shouldItPerformSpecial();
	private:
		static int count;
};

#endif