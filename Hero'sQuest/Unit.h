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
		virtual ~Unit();
		int performAttack();
		void defend(int attackValue);
		void setName(std::string name);
		std::string getName();
		void setHealth(int health);
		int getHealth();
		void setMaxHealth(int maxHealth);
		int getMaxHealth();
		void setAttack(int attack);
		int getAttack();
		void setMaxAttack(int maxAttack);
		int getMaxAttack();
		void setDefense(int defense);
		int getDefense();
		void setMaxDefense(int maxDefense);
		int getMaxDefense();
	protected:
		std::string name;
		int health;
		int maxHealth;
		int attack;
		int maxAttack;
		int defense;
		int maxDefense;
	private:
		static int count;
};

#endif