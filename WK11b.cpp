#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

string accessories[5];
// building a class
// keyword "class", then name of class.
class robot {
public:
  string name;
  int charge;
  int favAccessory;
  // damage and/or health
  // make it do a task

  // create a constructor
  // a constructor is always named the same as the class, and has no return
  // type. this function runs when a new robot variable is created
  robot() {
    cout << "Creating a new robot!\n";
    name = "Robot";
    charge = 10;
    favAccessory = rand() % 5;
  }

  robot(string givenName, int givenCharge) {
    cout << "Creating a robot with specific values...\n";
    name = givenName;
    charge = givenCharge;
    status();
    favAccessory = rand() % 5;
  }

  void status() { cout << "[" << name << ": " << charge << "].\n"; }

  void accRec() {
    cout << "You should equip the " << accessories[favAccessory] << ".\n";
  }

}; // don't forget the semi-colon at the end of the class.
// global variables
robot robots[10];
int main() {
  cout << "Hello World!\n";

  accessories[0] = "Funny butterfly";
  accessories[1] = "Funny twin";
  accessories[2] = "Funny gun";
  accessories[3] = "Funny glasses";
  accessories[4] = "Funny mask";
  srand(time(0));
  robot artoo;

  // make a newww robot variable
  // set up artoo
  artoo.name = "R2-D2";
  artoo.charge = 7;
  artoo.status();

  cout << artoo.name << ".\n";
  cout << artoo.name << "'s energy level is " << artoo.charge << ".\n";

  robot threepio("C-3PO", 6);
  artoo.accRec();
  threepio.accRec();

  // this is the start of a system
  // let's create an array of rovots
  // and randomly populate those robots with name and charge.

  robot robots[10];

  void startNextDay() {
    // using charge
    cout << "another day gone.\n";
    for (int i = 0; i < 10; i++) {
      robots[i].charge -= 1;
      if (robots[i].charge <= 0) {
        cout << robots[i].name << " has run out of energy.\n";
      }
    }
  }

  string robNames[5] = {"Artoo", "Threepio", "Robbie", "BB-8", "Marvin"};

  for (int i = 0; i < 10; i++) {
    robots[i] = robot(robNames[rand() % 6], rand() % 11 + 5);
  }

  for (int i = 0; i < 10; i++) {
    robots[i].status();
    robots[i].accRec();
  }

  startNewDay();
}