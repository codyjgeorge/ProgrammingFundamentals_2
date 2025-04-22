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

  // display complex number;
  void display() { cout << real << imaginary << "i" << endl; }

  // adds first complex number with second complex number;
  void add(Complex a, Complex b) {
    double realNum = a.real + b.real;
    double imNum = a.imaginary + b.imaginary;
    Complex c = Complex(realNum, imNum);
    cout << c << endl;
  }

  // overloaded functions;
  friend ostream &operator<<(ostream &output, Complex &c) {
    output << c.real << "+" << c.imaginary << "i" << endl;
    return output;
  }

  friend istream &operator>>(istream &input, Complex &a) {
    double realNum, imNum;
    input >> realNum >> imNum;
    a.setReal(realNum);
    a.setIm(imNum);
    return input;
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
  cin >> a;
  cout << "You entered: " << a << endl;

  // asks user to enter second complex number;
  cout << "Enter the second real number and second imaginary number of the "
          "second complex number: "
       << endl;
  cin >> b;
  cout << "You entered: " << b << endl;
  return 0;
}
