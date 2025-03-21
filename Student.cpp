#include "Student.h"
using namespace std;
class Student {
private:
  int idnumber;
  int grade;

public:
  string name;
  Student() {
    idnumber = 0;
    grade = 0;
    name = "John Doe";
  }
  Student(int newidNumber, int newGrade, string newName) {
    idnumber = newidNumber;
    grade = newGrade;
    name = newName;
  }
  void setidnumber(int newidNumber) {
    idnumber = newidNumber;
    cout << "ID number updated." << endl;
  }
  void setgrade(int newGrade) {
    grade = newGrade;
    cout << "Grade updated." << endl;
  }
  void setname(string newName) {
    name = newName;
    cout << "Name updated." << endl;
  }
  int getidnumber() { return idnumber; }
  int getgrade() { return grade; }
  string getname() { return name; }
  void displaydeets() {
    cout << "ID Number: " << idnumber << endl;
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
  }
};
