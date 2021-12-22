#include <iostream>
char pos[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row, col;
char sym = 'x';
bool tie = false;

void game_board() {

    std::cout << "       |     |   \n";
  std::cout << "    " << pos[0][0] << "  |  " << pos[0][1] << "  |  " << pos[0][2] << "  \n";
  std::cout << "  _____|_____|_____\n";
  std::cout << "       |     |     \n";
  std::cout << "    " << pos[1][0] << "  |  " << pos[1][1] << "  |  " << pos[1][2] << "  \n";
  std::cout << "  _____|_____|_____\n";
  std::cout << "       |     |     \n";
  std::cout << "    " << pos[2][0] << "  |  " << pos[2][1] << "  |  " << pos[2][2] << "  \n";
  std::cout << "       |     |     \n";

}

void sym_to_pos(std::string player1, std::string player2) {
  int digit;
  
  if(sym == 'x') {
    std::cout << player1 <<"'s turn, enter a value: ";
    std::cin >> digit;
  }

  if(sym == '0') {
    std::cout << player2 <<"'s turn, enter a value: ";
    std::cin >> digit;
  }

  switch(digit) {
    case 1: row = 0;
            col = 0;
        break;
    case 2: row = 0;
            col = 1;
        break;
    case 3: row = 0;
            col = 2;
        break;
    case 4: row = 1;
            col = 0;
        break;
    case 5: row = 1;
            col = 1;
        break;
    case 6: row = 1;
            col = 2;
        break;
    case 7: row = 2;
            col = 0;
        break;
    case 8: row = 2;
            col = 1;
        break;
    case 9: row = 2;
            col = 2;
        break;
      default: std::cout << "Invalid value!\n"; 
  }

  if(sym == 'x' and pos[row][col] != 'x' and pos[row][col] != '0') {
    pos[row][col] = 'x';
    sym = '0';
  }else if (sym == '0' and pos[row][col] != 'x' and pos[row][col] != '0') {
    pos[row][col] = '0';
    sym = 'x';
  }else {
    std::cout << "The space has been occupied.\n";
    sym_to_pos(player1, player2);
  }

 // game_board();
}

bool win_or_draw(std::string p1, std::string p2) {

  for(int i = 0; i < 3; i++) {
    if(pos[i][0] == pos[i][1] and pos[i][0] == pos[i][2] or pos[0][i] == pos[1][i] and pos[0][i]== pos[2][i]) {
        return true;
    }
    if(pos[0][0] == pos[1][1] and pos[1][1] == pos[2][2] or pos[0][2] == pos[1][1] and pos[1][1]== pos[2][0]) {
      return true;
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(pos[i][j] != 'x' and pos[i][j] != '0') {
        return false;
      }

    }
  }
  tie = true;

    if(sym == 'x' and tie == false) {
    std::cout << p2 << " wins!\n";
  }
  else if(sym == '0' and tie == false) {
    std::cout << p1 << " wins!\n";
  }else {
    std::cout << "It's a draw.\n";
  }

  return false;
}
