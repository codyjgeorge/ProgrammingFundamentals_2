#include <iostream>

using namespace std;

int main() {
  double amount;
  double remainder;
  int quarters;
  int dimes;
  int nickels;
  int pennies;

  cout << "Welcome to the Money Conversion Program!" << endl << endl;

  cout << "Please enter an amount in dollars: ";
  cin >> amount;

  cout << "Converting $" << amount << " into smaller units..." << endl << endl;

  quarters = amount / .25;
  remainder = amount - (quarters * .25);
  dimes = remainder / .10;
  remainder = remainder - (dimes * .10);
  nickels = remainder / .05;
  remainder = remainder - (nickels * .05);
  pennies = remainder / .01;

  cout << "Quarters (25c): " << quarters << endl;
  cout << "Dimes (10c): " << dimes << endl;
  cout << "Nickels (5c): " << nickels << endl;
  cout << "Pennies (1c): " << pennies << endl << endl;

  cout << "Total Coins: " << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl << endl;

  cout << "Thank you for using the Money Conversion Program!" << endl;

  return 0;
}
