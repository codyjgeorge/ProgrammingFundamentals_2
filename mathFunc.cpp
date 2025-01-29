#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Welcome to the Mathematical Functions Practice Program!" << endl
       << endl;
  cout << "Please enter a number: ";
  cin >> number;

  cout << "\nCalculating..." << endl << endl;

  cout << "Square root of " << number << " is: " << sqrt(number) << endl;
  cout << "Sine of " << number << " is: " << sin(number) << endl;
  cout << "Cosine of " << number << " is: " << cos(number) << endl;

  cout << "\nThank you for using the Mathematical Functions Practice Program!"
       << endl;

  return 0;
}
