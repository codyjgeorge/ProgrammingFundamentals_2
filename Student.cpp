#include "Student.h"
using namespace std;

Student::Student() {
  idnumber = 0;
  grade = 0;
  name = "John Doe";
}
Student::Student(int newidNumber, int newGrade, string newName) {
  idnumber = newidNumber;
  grade = newGrade;
  name = newName;
}
void Student::setidnumber(int newidNumber) {
  idnumber = newidNumber;
  cout << "ID number updated." << endl;
}
void Student::setgrade(int newGrade) {
  grade = newGrade;
  cout << "Grade updated." << endl;
}
void Student::setname(string newName) {
  name = newName;
  cout << "Name updated." << endl;
}
int Student::getidnumber() { return idnumber; }
int Student::getgrade() { return grade; }
string Student::getname() { return name; }
void Student::displaydeets() {
  cout << "ID Number: " << idnumber << endl;
  cout << "Name: " << name << endl;
  cout << "Grade: " << grade << endl;
}
