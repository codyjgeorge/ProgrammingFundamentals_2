#include <iostream>

using namespace std;

int decimal(hex) {
  char hex;
  hex = toupper(hex);

  if (hex <= 'F' && hex >= 'A') {
    int value = 10 + hex - 'A';
  } else if (isdigit(hex)) {
  }

  return hex;
};

int main() {
  char hexa;
  cout << "Welcome to the Hexadecimal to Decimal Converter!\n" << endl;
  cout << "Please enter a hexa decimal number: ";
  cin >> hexa;

  cout << "\nConverting " << hexa << " to a decimal..." << endl;

  cout << "\nThe decimal equivalent of hexadecimal " << hexa << " is "
       << decimal(hexa) << endl;

  cout << "\nThank you for using the Converter!";

  return 0;
}
