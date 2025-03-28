#include <iostream>

using namespace std;

class Person {

private:
  double height;
  double weight;
  string name;

public:
  Person() {
    height = 0;
    weight = 0;
    name = "John Doe";
  }
  Person(int newHeight, int newWeight, string newName) {
    height = newHeight;
    weight = newWeight;
    name = newName;
  }
  const int getHeight() { return height; }
  const int getWeight() { return weight; }
  const string getName() { return name; }
  void setName() {
    cout << "Enter your name: " << endl;
    cin >> name;
  }
  void setHeight() {
    cout << "Enter " << name << "'s height(in meters): " << endl;
    cin >> height;
  }
  void setWeight() {
    cout << "Enter " << name << "'s weight(in kilograms): " << endl;
    cin >> weight;
  }
  const void displayPerson() {
    cout << name << endl;
    cout << height << endl;
    cout << weight << endl;
  }
  const int getBMI() {
    double bmi = weight / (height * height);
    return bmi;
  }
  static void interpreter(double bmi) {
    if (bmi < 19) {
      cout << "An extra burger wouldnt hurt..." << endl;
    } else if (bmi > 18 && bmi < 25) {
      cout << "What a snack!" << endl;
    } else if (bmi > 24 && bmi < 30) {
      cout << "Fatty!" << endl;
    } else {
      cout << "Woah there, a diet wouldnt hurt..." << endl;
    }
  }
};

int main() {
  Person personArr[3] = {};
  cout << "Welcome to the BMI calculator. \n\nEnter the name, height and "
          "weight of three people."
       << endl;
  for (int i = 0; i < 3; i++) {
    personArr[i].setName();
    personArr[i].setHeight();
    personArr[i].setWeight();
  }
  for (int j = 0; j < 3; j++) {
    personArr[j].displayPerson();
    cout << personArr[j].getName() << "'s BMI is: " << personArr[j].getBMI()
         << " %" << endl;
    Person::interpreter(personArr[j].getBMI());
  }
  cout << "Thank you for using the BMI Calculator" << endl;
  return 0;
}
