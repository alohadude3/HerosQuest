/**
 * Source file for SpecialAttack class
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include "SpecialAttack.h"

/** Empty constructor */
SpecialAttack::SpecialAttack()
{

}

/** Constructor with attributes as parameters */
SpecialAttack::SpecialAttack(int baseSpecialAttack, int maxSpecialAttack)
{
	specialAttack = baseSpecialAttack;
	this->maxSpecialAttack = maxSpecialAttack;
}

/** Destructor */
SpecialAttack::~SpecialAttack()
{

}