#include <iostream>

using namespace std;

class Complex {
private:
  double real;
  double imaginary;

public:
  // constructors;
  Complex() {
    double real = 0;
    double imaginary = 0;
  }
  Complex(double realNum, double imNum) {
    real = realNum;
    imaginary = imNum;
  }

  // setters;
  void setReal(double num) { real = num; }

  void setIm(double imNum) { imaginary = imNum; }

  // getters;
  const double getReal() { return real; }

  const double getIm() { return imaginary; }

  // overloaded member functions for calculations;
  Complex operator+(Complex &b) {
    return Complex(real + b.real, imaginary + b.imaginary);
  }
  Complex operator-(Complex &b) {
    return Complex(real - b.real, imaginary - b.imaginary);
  }

  // overloaded non-member function for output;
  // prints in "a+bi" or "a-bi" format;
  friend ostream &operator<<(ostream &output, Complex &a) {
    if (a.imaginary < 0) {
      output << abs(a.real) << a.imaginary << "i" << endl;
    } else {
      output << abs(a.real) << "+" << a.imaginary << "i" << endl;
    }
    return output;
  }
};

int main() {
  double userReal;
  double userImaginary;
  Complex a;
  Complex b;

  cout << "Welcome to the simple complex number calculator!" << endl << endl;

  // asks user to enter first complex number;
  cout << "Enter the first real number and first imaginary number of the first "
          "complex number: "
       << endl;
  cin >> userReal >> userImaginary;
  a.setReal(userReal);
  a.setIm(userImaginary);
  cout << "You entered: " << a << endl;

  // asks user to enter second complex number;
  cout << "Enter the second real number and second imaginary number of the "
          "second complex number: "
       << endl;
  cin >> userReal >> userImaginary;
  b.setReal(userReal);
  b.setIm(userImaginary);
  cout << "You entered: " << b << endl;

  // calculations +,-,*,/ ;
  // addition;
  Complex c = a + b;
  cout << "Total: " << c << endl;

  // subtraction;
  c = a - b;
  cout << "Difference: " << c << endl;
  return 0;
}
