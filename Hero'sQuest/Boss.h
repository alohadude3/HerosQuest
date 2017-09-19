/**
 * Header file for Boss class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef BOSS_H
#define BOSS_H

#include "Unit.h"
#include "SpecialAttack.h"

class Boss : public Unit, public SpecialAttack
{
	public:
		Boss();
		~Boss();
	private:
};

#endif