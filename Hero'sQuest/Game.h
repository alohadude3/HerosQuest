/**
 * Header file for Game
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Hero.h"
#include "Unit.h"

class Game
{
	public:
		Game();
		~Game();
		void init();
		bool play();
		void fight(Unit* unit1, Unit* unit2);
		void shop();
		std::string getPlayerName();
		bool askForSpecial();
		void cleanup();
		void wait();
		void showBattleInformation(Unit* combatants[2], int turn);
		void levelUpHero(Hero* hero);
		void resetSpecials(Unit* combatants[2]);
		bool getTryAgain();
	private:
		Hero* hero;
		std::vector<Unit*> enemies;
};

#endif