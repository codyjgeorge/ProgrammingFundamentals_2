#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Complex {
private:
  int realNum;
  string imNum;

public:
  Complex() {
    int realNum = 0;
    string imNum = "i";
  }

  void setReal(int num) { realNum = num; }

  void setIm(string imaginary) { imNum = imaginary; }

  const int getReal() { return realNum; }

  const string getIm() { return imNum; }
};

int main() { return 0; }
