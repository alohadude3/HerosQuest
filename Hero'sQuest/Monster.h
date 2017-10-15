/**
 * Header file for Monster class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef MONSTER_H
#define MONSTER_H

#include "Unit.h"

class Monster : public Unit
{
	public:
		Monster();
		Monster(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack,int baseDefense, int maxDefense);
		~Monster();
	private:
		static int count;
};

#endif