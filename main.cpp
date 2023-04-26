#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class character {
public:
  string name;
  string catchPhrase;
  int id;

  character(string n, string givenCatch, int givenID) {
    name = n;
    catchPhrase = givenCatch;
    id = givenID;
  }

  character() {
    // does nothing
  }
};

// global array of characters

character characters[100];
int index = 0;

void load() {
  // get the file open
  ifstream file("characters.csv");
  string line;

  if(file.is_open()) {
    while(getline(file, line)) {
      cout << "the first comma is character #" << line.find(",") << ".\n";
      cout << line << "\n";
      cout << "name is " << line.substr(0,line.find(",")) << "\n";

      // find the first comma
      int comma = line.find(",");
      // save the name
      string name = line.substr(0, comma);
      // erase the name and the comma
      line.erase(0, comma + 1);

      cout << "line is now " << line << "\n";
      //find the second comma,
      comma = line.find(",");
      //find the id number
      int id = stoi(line.substr(0, comma));
      //erase the id number and the comma
      line.erase(0, comma + 1);

      cout << "ID = " << id << ".\n";
    }
  }
}

void save() {
  
}

void show() {
  
}

int main() {
  load();
}