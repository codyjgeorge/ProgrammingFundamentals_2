#include <iostream>

using namespace std;

int main() {
  double amount;

  cout << "Welcome to the Money Conversion Program!" << endl << endl;

  cout << "Please enter an amount in dollars: ";
  cin >> amount;

  cout << "Converting $" << amount << "into smaller units..." << endl << endl;

  cout << "Quarters (25c): " << amount / .25 << endl;
  cout << "Dimes (10c): " << amount / .10 << endl;
  cout << "Nickels (5c): " << amount / .05 << endl;
  cout << "Pennies (1c): " << amount / .01 << endl << endl;

  cout << "Total Coins: " << endl;
  cout << "Quarters: " << amount / .25 << endl;
  cout << "Dimes: " << amount / .10 << endl;
  cout << "Nickels: " << amount / .05 << endl;
  cout << "Pennies: " << amount / .01 << endl << endl;

  cout << "Thank you for using the Money Conversion Program!" << endl;

  return 0;
}
