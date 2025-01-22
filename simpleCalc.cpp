#include <cmath> // import math library
#include <iostream>

using namespace std;

int main() {
  double num1; // declare num1 variable
  double num2; // declare num2 variable

  cout << "Welcome to the Simple Calculator!" << endl << endl;

  cout << "Please enter the first number: ";
  cin >> num1; // get user input for first number

  cout << "Please enter the second number: ";
  cin >> num2; // get user input for second number

  cout << "Calculating..." << endl << endl;

  // do math calulations
  double sum = num1 + num2;
  double difference = num1 - num2;
  double product = num1 * num2;
  double quotient = num1 / num2;
  double exponent = pow(num1, num2);
  // using built-in pow function from cmath library, first argument is base,
  // second argument is exonent

  // output process to user
  cout << "Addition: " << num1 << " + " << num2 << " = " << sum << endl;
  cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference
       << endl;
  cout << "Multiplication: " << num1 << " * " << num2 << " = " << product
       << endl;
  cout << "Division: " << num1 << " / " << num2 << " = " << quotient << endl;
  cout << "Exponentiation: " << num1 << " ^ " << num2 << " = " << exponent
       << endl
       << endl;

  cout << "Thank you for using the Simple Calculator!";
  return 0;
}
