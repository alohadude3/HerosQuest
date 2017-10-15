/**
 * Source file for Game
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include <iostream>
#include "conio.h" //_getch
#include "Game.h"
#include "Monster.h"
#include "Boss.h"

using namespace std;

/** Empty constructor */
Game::Game()
{

}

/** Destructor */
Game::~Game()
{

}

/** Initialises the game */
void Game::init()
{
	string name = getPlayerName();
	hero = new Hero(name, 20, 50, 3, 10, 3, 10, 2, 10, 1, 0);
	enemies.push_back(new Monster("Monster 1", 10, 100, 1, 10, 1, 10));
	enemies.push_back(new Monster("Monster 2", 20, 100, 3, 10, 2, 10));
	enemies.push_back(new Monster("Monster 3", 30, 100, 5, 10, 4, 10));
	enemies.push_back(new Monster("Monster 4", 40, 100, 6, 10, 7, 10));
	enemies.push_back(new Boss("Boss", 50, 100, 8, 10, 8, 10, 5, 10, 1));
}

/** Play the game */
void Game::play()
{
	while (hero->getHealth() > 0 && enemies.size() > 0)
	{
		fight(hero, enemies.at(0));
		if (enemies.at(0)->getHealth() == 0)
		{
			delete enemies.at(0);
			enemies.erase(enemies.begin());
		}
		// shop();
	}
	cleanup();
}

/** Start a fight */
void Game::fight(Unit* unit1, Unit* unit2)
{
	Unit* combatants[2] = {unit1, unit2};
	for (int i = 0; i < 2; i++)
	{
		SpecialUnit* temp = dynamic_cast<SpecialUnit*>(combatants[i]);
		if (temp)
		{
			temp->setSpecials(1);
		}
	}
	int turn = 0;
	while (unit1->getHealth() > 0 && unit2->getHealth() > 0)
	{
		system("cls");
		showBattleInformation(combatants, turn);
		int next = (turn + 1) % 2;
		bool special = false;
		if (dynamic_cast<Hero*>(combatants[turn]))
		{
			if (static_cast<Hero*>(combatants[turn])->getSpecials() > 0)
			{
				special = askForSpecial();
			}
		}
		else if (dynamic_cast<Boss*>(combatants[turn]))
		{
			Boss* tempBoss = static_cast<Boss*>(combatants[turn]);
			if (tempBoss->getSpecials() > 0)
			{
				special = tempBoss->shouldItPerformSpecial();
			}
		}
		int healthBefore = combatants[next]->getHealth();
		if (special)
		{
			combatants[next]->defend(static_cast<SpecialUnit*>(combatants[turn])->performSpecial());
			cout << combatants[turn]->getName() << " performs a special attack on " << combatants[next]->getName() << endl;
			wait();
		}
		else
		{
			combatants[next]->defend(combatants[turn]->performAttack());
			cout << combatants[turn]->getName() << " attacks " << combatants[next]->getName() << endl;
			wait();
		}
		int damage = healthBefore - combatants[next]->getHealth();
		cout << combatants[next]->getName() << " takes " << damage << " damage\n";
		wait();
		turn = next;
	}
	int victor;
	if (combatants[0]->getHealth() > 0)
	{
		victor = 0;
	}
	else
	{
		victor = 1;
	}
	cout << combatants[victor]->getName() << " wins the showdown.\n";
	wait();
	if (victor == 0)
	{
		levelUpHero(static_cast<Hero*>(combatants[0]));
		wait();
	}
}

/** Shop inbetween fights */
void Game::shop()
{

}

/** Asks and returns the name of the player */
string Game::getPlayerName()
{
	string name;
	while (name.empty())
	{
		cout << "What is your hero's name? ";
		cin >> name;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (name.empty())
		{
			cout << "Name cannot be empty, please try again.\n";
		}
	}
	return name;
}

/** 
 * Asks the player if they want to perform a special attack
 * Returns true if the player says yes
 * Returns false if the player says no
*/
bool Game::askForSpecial()
{
	cout << "Would you like to perform a special attack? (y/n)\n";
	char response = _getch();
	while (response != 'y' && response != 'n')
	{
		response = _getch();
	}
	return response == 'y';
}

/** Frees up memory */
void Game::cleanup()
{
	delete hero;
	hero = NULL;
	for (size_t i = 0; i < enemies.size(); i++)
	{
		delete enemies.at(i);
		enemies.erase(enemies.begin() + i);
	}
}

/** Waits for enter to be pressed before resuming */
void Game::wait()
{
	while (_getch() != '\r')
	{
		//do nothing
	}
}

/** Prints out the battle information */
void Game::showBattleInformation(Unit* combatants[2], int turn)
{
	cout << combatants[0]->getName() << " (" << combatants[0]->getHealth() << "/" << combatants[0]->getMaxHealth() << ") vs " << combatants[1]->getName() << " (" << combatants[1]->getHealth() << "/" << combatants[1]->getMaxHealth() << ")\n";
	Hero* hero = dynamic_cast<Hero*>(combatants[0]);
	if (hero)
	{
		cout << hero->getName() << "'s stats:\n";
		cout << "Attack: (" << hero->getAttack() << "/" << hero->getMaxAttack() << ")\n";
		cout << "Defense: (" << hero->getDefense() << "/" << hero->getMaxDefense() << ")\n";
		cout << "Special: (" << hero->getSpecialAttack() << "/" << hero->getMaxSpecialAttack() << ")\n";
		cout << "Specials available: " << hero->getSpecials() << "\n";
		cout << "Money: $" << hero->getMoney() << "\n\n"; 
	}
	cout << combatants[turn]->getName() << "'s turn\n\n";
	wait();
}

/** Heals, levels up the hero's stats, and rewards the hero with prize money */
void Game::levelUpHero(Hero* hero)
{
	cout << hero->getName() << " earns $" << hero->getHealth() << endl;
	hero->setMoney(hero->getMoney() + hero->getHealth());
	cout << hero->getName() << " restores 20hp\n";
	hero->setHealth(hero->getHealth() + 20);
	int attackGain = rand() % 3 + 0;
	cout << hero->getName() << "'s attack raises by " << attackGain << endl;
	hero->setAttack(hero->getAttack() + attackGain);
	int defenseGain = rand() % 3 + 0;
	cout << hero->getName() << "'s defense raises by " << defenseGain << endl;
	hero->setDefense(hero->getDefense() + defenseGain);
	int specialGain = rand() % 3 + 0;
	cout << hero->getName() << "'s special raises by " << specialGain << endl;
	hero->setSpecialAttack(hero->getSpecialAttack() + specialGain);
}