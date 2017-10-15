/**
 * Header file for SpecialUnit class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef SPECIALUNIT_H
#define SPECIALUNIT_H

#include "Unit.h"

class SpecialUnit : public Unit
{
	public:
		SpecialUnit();
		SpecialUnit(std::string name, int baseHealth, int maxHealth, int baseAttack, int maxAttack, int baseDefense, int maxDefense,
			int baseSpecialAttack, int maxSpecialAttack, int specials);
		virtual ~SpecialUnit();
		int performSpecial();
		void setSpecialAttack(int specialAttack);
		int getSpecialAttack();
		void setMaxSpecialAttack(int maxSpecialUnit);
		int getMaxSpecialAttack();
		void setSpecials(int specials);
		int getSpecials();
	protected:
		static int count;
		int specialAttack;
		int maxSpecialAttack;
		int maxSpecials;
		int specials;
};

#endif