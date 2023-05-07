#include <iostream>
#include <string>     
#include <ctime>
#include <cstdlib>
using namespace std;

int playerHealth = 20;
int playerTreasure = 0;


void adventure() {
  cout << "Would you like to go searching for treasure? y/n\n";
  char input;
  cin >> input;
  if(input == 'y') {
    cout << "You encounter a group of vagrants!\n";

    srand (time(0));
    int vagrantAttack = rand() % 9 + 1;
    int playerBlock = rand() % 9 + 1;
    int vagrantTreasure = rand() % 9 + 1;
    
    
    if(playerBlock >= vagrantAttack) {
      cout << "You defeated the vagrants!\n";
      playerTreasure += vagrantTreasure;
    }
    else {
      cout << "The vagrants fended you off.\n";
      playerHealth -= vagrantAttack;
    }
    if(playerHealth > 0) {
      cout << "Your health is currently " << playerHealth << " and you currently have " << playerTreasure << " treasures.\n";
    adventure();
    }
    else {
      cout << "You have died. How unfortunate.";
    }

  }
  else if(input == 'n') {
    cout << "You stroll on home with your pockets full of " << playerTreasure << " treasures.";
  }
}

void story() {
  cout << "You wake up, ready to take the day on!\n";
  adventure();
}



int main() {
  story();
}