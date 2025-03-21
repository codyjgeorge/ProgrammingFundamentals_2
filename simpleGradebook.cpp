#include "Student.h"
#include <iostream>
using namespace std;

int main() {
  Student studentarr[3] = {Student(1, 100, "Alex"), Student(2, 75, "David"),
                           Student(3, 60, "Tom")};
  for (int i = 0; i < 3; i++) {
    studentarr[i].displaydeets();
  }
  return 0;
}
