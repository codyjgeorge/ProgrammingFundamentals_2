#include <iostream>

using namespace std;

class Complex {
private:
  double real;
  double imaginary;

public:
  // constructors;
  Complex() {
    double real;
    double imaginary;
  }
  Complex(double realNum, double imNum) {
    double real = 0;
    double imaginary = 0;
  }

  // setters;
  void setReal(double num) { real = num; }

  void setIm(double imNum) { imaginary = imNum; }

  // getters;
  const double getReal() { return real; }

  const double getIm() { return imaginary; }

  // display complex number;
  void display() { cout << real << imaginary << "i" << endl; }

  // adds first complex number with second complex number;
  void add(Complex a, Complex b) {
    double realNum = a.real + b.real;
    double imNum = a.imaginary + b.imaginary;
    Complex c = Complex(realNum, imNum);
    cout << Complex c << endl;
  }
};

int main() {
  double firstReal;
  double firstImaginary;
  double secondReal;
  double secondImaginary;
  Complex a;
  Complex b;
  Complex c;

  cout << "Welcome to the simple complex calculator!" << endl << endl;

  // asks user to enter first complex number;
  cout << "Enter the first real number and first imaginary number of the first "
          "complex number: "
       << endl;
  cin >> a.setReal(firstReal), a.setIm(firstImaginary);
  cout << "You entered: " << a.display() << endl;

  // asks user to enter second complex number;
  cout << "Enter the second real number and second imaginary number of the "
          "second complex number: "
       << endl;
  cin >> b.setReal(secondReal), b.setIm(secondImaginary);
  return 0;
}
