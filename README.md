# FIT1048 Assignment 3
### Title: Hero's Quest
### Author: Leo Huang
### Student ID: 16886294
### Due Date: 20/10/2017

## Instructions
Hero's Quest is a console based text game controlled by command line inputs.
Most inputs will require a single character to be entered.
Available commands will usually be hinted by the game in brackets.

### For example:
`Do you want to continue? (y/n)`

Press `y` to continue.

The game will follow a turn based combat system.
The player will be pitted against 4 regular monster then a final boss.
The game will end when either the player runs out of health or all the enemies have been defeated.

### Gameplay
The game will require the user to press `enter` to continue showing the next action. This feature is implemented with the intention of giving the user time to read through each individual action taken so they can process the information.

## Features
* Name customisation for the player
* Use of pointers for multiple-layer inheritance and polymorphism
* Error handling for invalid inputs
* Simple turn based combat system with an element of randomness simulating dice rolls
* Special attacks are available to certain special units including the player and the boss
* Boss will perform special attack at random, the more likely the lower its current health
* A shop inbetween each battle to purchase buffs