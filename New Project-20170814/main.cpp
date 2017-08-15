/*
 * Idiot Savant Simulator:
 * Simulates a number of actions and awards XP accordingly.
 * Intelligence affects the chance of "Bright Ideas,"
 * Idiot Savant Rank 2 is assumed (x5 XP).
 *
 */

// #include <iostream>

#include "IS_Simulator.h"

int main()
{
#if 0
	std::cout << "What is your character's Intelligence score? ";
	unsigned char Intelligence{};
	std::cin >> Intelligence;

	std::cout << "How many actions should be simulated? ";
	unsigned int numberOfActions{};
	std::cin >> numberOfActions;

	std::cout << "How much XP per action? ";
	unsigned int xpPerAction{};
	std::cin >> xpPerAction;
#endif

	// Your character's Intelligence score:
	unsigned char Intelligence{ 1u };
	// How many actions you would like to simulate:
	unsigned int numberOfActions{ 1000u };
	// How much XP is awarded per action:
	unsigned int xpPerAction{ 10u };

	IS_Simulator ISS(Intelligence, numberOfActions, xpPerAction);

	return 0;
}