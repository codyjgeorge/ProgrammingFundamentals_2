#ifndef STUDENT
#define STUDENT
#include <iostream>
using namespace std;

class Student {
private:
  int idnumber;
  int grade;

public:
  string name;

  Student();

  Student(int, int, string);

  void setidnumber(int);

  void setgrade(int);

  void setname(string);

  int getidnumber();

  int getgrade();

  string getname();

  void displaydeets();
};
#endif
