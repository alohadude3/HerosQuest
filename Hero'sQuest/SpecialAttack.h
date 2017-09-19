/**
 * Header file for SpecialAttack class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef SPECIALATTACK_H
#define SPECIALATTACK_H

class SpecialAttack
{
	public:
		SpecialAttack();
		SpecialAttack(int baseSpecialAttack, int maxSpecialAttack);
		~SpecialAttack();
	protected:
		int specialAttack;
		int maxSpecialAttack;
};

#endif