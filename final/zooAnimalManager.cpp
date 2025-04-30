#include <iostream>
#include <string>
#include <vector>

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
};

// derived classes of 'Animal';
class Lion : public Animal {
public:
  Animal("Lion", " ", "Roar!");
};
class Monkey : public Animal {
public:
  string name = " ";
  string type = "Monkey";
  string sound = "Chatter!";
};
class Elephant : public Animal {
public:
  string name = " ";
  string type = "Elephant";
  string sound = "Trumpet!";
};

// main program;
int main() {
  int loopcontrol = 0;
  vector<Animal> zooList = {};

  // menu loop;
  while (loopcontrol < 4) {
    cout << "\n1. Add an animal \n2. List all animals \n3. Exit" << endl;
    cout << "\nChoose an option: ";
    cin >> loopcontrol;

    // option 1;
    if (loopcontrol == 1) {

      int userAnimal;
      cout << "\n1. Lion \n2. Monkey \n3. Elephant \n\nChoose which animal to "
              "add: ";
      cin >> userAnimal;
      if (userAnimal == 1) {
        zooList.push_back(Animal());
        cout << "\nLion Added!" << endl;
      } else if (userAnimal == 2) {
        zooList.push_back(Animal());
        cout << "\nMonkey Added!" << endl;
      } else if (userAnimal == 3) {
        zooList.push_back(Animal());
        cout << "\nElephant Added!" << endl;
      } else {
        cout << "\nInvalid Entry" << endl;
      }
    }

    // option 2;
    else if (loopcontrol == 2) {
      for (int i = 0; i < zooList.size(); i++) {
        cout << zooList[i].getType() << endl;
      }
    }

    // option 3;
    else if (loopcontrol == 3) {
      cout << "\nHave a great day!" << endl;
      break;
    }

    // invalid entry;
    else {
      cout << "Invalid Entry, please enter 1, 2, or 3. \nChoose an option: ";
      cin >> loopcontrol;
    }
  }

  return 0;
}
