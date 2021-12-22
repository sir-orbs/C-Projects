#include <iostream>
#include <vector>
#include "funcs.hpp"
bool game_tie = false;

int main() {
  std::cout << "+++++===========+++++\n";
  std::cout << "     TIC-TAC-TOE     \n";
  std::cout << "+++++===========+++++\n"; 
  std::cout << "\n";

  std::string playerA, playerB;
  
  std::cout << "Enter name for player 1: ";
  std::cin >> playerA;
  std::cout << "Enter name for player 2: ";
  std::cin >> playerB;
  std::cout << playerA << " gets the first turn\n";
  std::cout << playerB << " gets the second turn\n";

  while(not win_or_draw(playerA, playerB)) {
    game_board();
    sym_to_pos(playerA, playerB);
    game_tie = win_or_draw(playerA, playerB);
  }
  
  return 0;
}