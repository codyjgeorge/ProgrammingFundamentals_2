#include <iostream>

using namespace std;

// establish the "Animal" class;
class Animal {
public:
  string type;
  string name;
  string sound;

  // constructors;
  Animal() {
    string type;
    string name;
    string sound;
  }

  Animal(string animal, string title, string noise) {
    type = animal;
    name = title;
    sound = noise;
  }

  // setters;
  void setType(string animal) { type = animal; }
  void setName(string title) { name = title; }
  void setSound(string noise) { sound = noise; }

  // getters;
  string getType() { return type; }
  string getName() { return name; }
  string getSound() { return sound; }

  // speak function, tells the name of the animal, the type, and the sound it
  // makes;
  void speak(string type, string title, string sound) {
    cout << title << "the " << type << " says " << sound << endl;
  }

  // derived animal classes;
  Animal::Lion {
    name;
    string type = "Lion";
  }
};

int main() {
  int loopcontrol = 0;

  // menu loop;
  while (loopcontrol < 3) {
    cout << "1. Add an animal \n2. List all animals \n3. Exit" << endl;
    cout << "Choose an option: ";
    cin >> loopcontrol;

    // option 1;
    if (loopcontrol == 1) {

    }

    // option 2;
    else if (loopcontrol == 2) {

    }

    // option 3;
    else if (loopcontrol == 3) {

    }

    // invalid entry;
    else {
      cout << "Invalid Entry, please enter 1, 2, or 3. \nChoose an option: ";
      cin >> loopcontrol;
    }
  }

  return 0;
}
