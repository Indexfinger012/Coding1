#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// return type, name, (input) {code}
// defining a function that returns nothing,
// named "welcome", with no input parameters.
void welcome() {
  cout << "Hello World!\n";
}

// overloading a function
// don't forget to include <ctime> and <cstdlib>, also to use srand() in main()
void welcome(string message) {
  cout << message << "\n";
}

// return type is int

// make an input parameter named 'sides' to change the max random amount.
// sides has a default value of 6, so that if we don't give an amount, sides = 6
int rollDie(int sides = 6, int min = 1) {
  return rand() % sides + min;
}

// build a funcito that asks for specific user input (y/n)... and lops // until it gets it.
// let's make it return a boolean

bool askYN(string question = "Keep playing?") {
  while(true) {
    cout << question << " (y/n)\n";
    char input;
    cin >> input;

    if(input == 'y') {
      return true;
    }
    else if(input == 'n') {
    return false;
    }
  }// end of while(true) loop.
}// end of askYN() function.

int main() {
  srand(time(0));
  // calling the welcome() function
  welcome();
  welcome("howdy!");

  int roll = rollDie();
  cout << "Your die roll is " << rollDie(6) << ".\n";
  cout << "Your die roll is " << rollDie(12) << ".\n";
  cout << "Your die roll is " << rollDie(20) << ".\n";
  cout << "Your die roll is " << rollDie(100) << ".\n";
  cout << "Your die roll is " << rollDie(1000,1000) << ".\n";
  if (askYN() == true) {
    cout << "Here we go again!\n";
    cout << "Your die roll is " << rollDie(1000,1000) << ".\n";
  }
  else {
    cout << "Thanks for playing!\n";
  }

  if (askYN("Should we go left?")) {
    cout << "Here we go to the left.\n";
  }
  else {
    cout << " I mean, alright! Your funeral...\n";
  }

  
  if (askYN("Should we turn the lights on?")) {
    cout << "That's much better! i can see everthing... including that axe murderer!!!\n";
  }
  else {
    cout << "Well, my misguided sense of safety is intact, I guess.\n";
  }
}