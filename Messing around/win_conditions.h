#ifndef win_conditions.h
#define win_conditions.h

#include <string>

bool Player1Wins(const std::string& player1, const std::string& player2);

bool Player2Wins(const std::string& player1, const std::string& player2);

bool Tie(const std::string& player1, const std::string& player2);

#endif