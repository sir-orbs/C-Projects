#include <iostream>

int main() {

  int user_choice = 1; //initializing to 1 bcs the while loop kept looping in codecademy sandbox
  std::string username = "t"; // for the char name

  std::cout << "============================\n";
  std::cout << " THE HUNGRY BOY ADVENTURES!!\n";
  std::cout << "============================\n";
  
  std::cout << "Enter 1 to start!!\n";
  std::cin >> user_choice;
  
  // check if the user input is 1 in order to start game
  while(user_choice != 1){
    std::cout << "Invalid input!\n";

    std::cout << "Enter 1 to start!!\n";
    std::cin >> user_choice;
  }

  // after game starts , take username for later use, varify it.
    std::cout << "Please enter name for your character: ";
    std::cin >> username;

  //make sure username is not empty
    while(username == "") {
      std::cout << "Please enter name for your character: ";
      std::cin >> username;
    }

    std::cout << "\n";
    std::cout << "\n";
// game start
    std::cout << "Once upon a time there was a hungry and tired boy named " << username << ". The boy was looking for a village when he walked into a fork road and he had to decide which way to go from there...\n";

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Which path will he choose? \n";
    std::cout << "\n";
    std::cout << "  1. The viny, twisted path on the left\n";
    std::cout << "  2. The path that is scorched with flames on the right\n";
    std::cout << "  3. The path in the middle, it goes through a deep forest\n";
    std::cout << "\n";
    std::cout << "Answer: ";
    std::cin >> user_choice;
  
  // verify the input from the user
  while(user_choice != 1 and user_choice != 2 and user_choice != 3) {
    std::cout << "Invalid option! \n";
    std::cout << "Answer: ";
    std::cin >> user_choice;
  }
    //check which option the user picked
    if(user_choice == 1) {

      std::cout << "\n";
      std::cout << username <<" decided to take the viny and twisted path on the left. Along the path he noticed thorns that were busy scratching his lower legs region\n";
      std::cout << "\n";
      std::cout << "Would you :\n"; // more options to choose from
      std::cout << "  1. Continue on this path..\n";
      std::cout << "  2. Go back to the fork..\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     //verify user input again
     while(user_choice != 1 and user_choice != 2)
     {
      std::cout << "Invalid Option!\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     }
     //check recent choices
        if(user_choice == 1) {
          std::cout << "\n";
          std::cout << "Alas! Those were poisonous thorns and so the boy died on the road\n";
          return 0; // terminate
        }else if(user_choice == 2){
          std::cout << "The boy went back but died of hunger and exhaustion\n";
          return 0;
        }
    }

     //check which option the user picked
    if(user_choice == 2) {

      std::cout << "\n";
      std::cout << username <<" decided to take the ashy path on the right. Along the path he noticed ashes that looked like bones, as though something burnt was covered the bones to ashes\n";
      std::cout << "\n";
      std::cout << "Would you :\n"; // more options to choose from
      std::cout << "  1. Continue on this path..\n";
      std::cout << "  2. Go back to the fork..\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     //verify user input again
     while(user_choice != 1 and user_choice != 2)
     {
      std::cout << "Invalid Option!\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     }
     //check recent choices
        if(user_choice == 1) {
          std::cout << "\n";
          std::cout << "Alas! There was a dragon nearby and it took the boy as a snack!\n";
          return 0;
        }else if(user_choice == 2){
          std::cout << "The boy went back but died of hunger and exhaustion\n";
          return 0;
        }
    }

        if(user_choice == 3) {

      std::cout << "\n";
      std::cout << username <<" decided to take the forest path in the middle. Along the path he noticed dark leaves along the path and some mushrooms here and there.\n";
      std::cout << "\n";
      std::cout << "Would you :\n"; // more options to choose from
      std::cout << "  1. Continue on this path..\n";
      std::cout << "  2. Go back to the fork..\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     //verify user input again
     while(user_choice != 1 and user_choice != 2)
     {
      std::cout << "Invalid Option!\n";
      std::cout << "Answer: ";
      std::cin >> user_choice;
     }
     //check recent choices
        if(user_choice == 1) {
          std::cout << "\n";
          std::cout << "Congrats!! "<< username <<" made it to the village safely\n";
          return 0;
        }else if(user_choice == 2){
          std::cout << "The boy went back but died of hunger and exhaustion\n";
          return 0;
        }
    }
  

  
}