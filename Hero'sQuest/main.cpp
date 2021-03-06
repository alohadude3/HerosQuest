/**
 * Main file for Hero's Quest
 * Author: Leo Huang
 * Student ID: 26886294
 * Date created: 16/09/2017
*/

#include <algorithm> //srand
#include <time.h> //time
#include "Game.h"

using namespace std;

int main()
{
	srand(time(NULL));
	bool playing = true;
	while (playing)
	{
		Game game = Game();
		game.init();
		playing = game.play();
	}
	return 0;
}