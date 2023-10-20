#include <iostream>
#include <string>
#include <vector>

#include "win_conditions.h"

int main(int argc, char* argv[]) {
	std::vector<std::string> arguments(argv, argv + argc);

	if (arguments.size() != 3) {
		std::cout << "error: you must supply two arguments\n";
		return 1;
	}
	
	if ((arguments.at(1) != "r" || arguments.at(1) != "p" || arguments.at(1) != "s")
		&& (arguments.at(2) != "r" || arguments.at(2) != "p" || arguments.at(2) != "s")) {
		std::cout << "error: must enter r, p, or s for both players\n";
	}

	std::string player1{arguments.at(1)};
	std::string player2{arguments.at(2)};

	if (Player1Wins(player1, player2)) {
		std::cout << "Player 1 wins\n";
		return 0;
	}

	if (Player2Wins(player1, player2)) {
		std::cout << "Player 2 wins\n";
		return 0;
	}

	if (Tie(player1, player2)) {
		std::cout << "Tie\n";
		return 0;
	}
}