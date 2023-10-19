#include "win_conditions.h"

#include <string>

bool Player1Wins(const std::string& player1, const std::string& player2) {
	if ((player1 == "r" && player2 == "s") || (player1 == "p" && player2 == "r")
		|| (player1 == "s" && player2 == "p")) {
		return true;
	}else {
		return false;
	}
}

bool Player2Wins(const std::string& player1, const std::string& player2) {
	if ((player2 == "r" && player1 == "s") || (player2 == "p" && player1 == "r")
		|| (player2 == "s" && player1 == "p")) {
		return true;
	}else {
		return false;
	}
}

bool Tie(const std::string& player1, const std::string& player2) {
	if (player1 == player2) {
		return true;
	}else {
		return false;
	}
}