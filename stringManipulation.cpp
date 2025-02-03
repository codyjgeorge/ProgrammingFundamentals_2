#include <iostream>

using namespace std;

int main() {

  char letter;
  char letter2;
  string firstString;
  string secondString;

  cout << "Welcome to the Character and String Manipulation Program!" << endl
       << endl;

  cout << "Please enter a single character: ";
  cin >> letter;
  cout << "The ASCII code for " << letter << " is: " << static_cast<int>(letter)
       << endl
       << endl;
  cout << "Demonstrating Escape Sequences:" << endl;
  cout << "First Line \nSecond Line" << endl;
  cout << "First Line \ttabbed Second Line" << endl;
  cout << "Here is a backslash \\" << endl;
  cout << endl;

  cout << "Enter a lowercase character to convert to uppercase: ";
  cin >> letter2;
  cout << "The uppercase version of " << letter2
       << " is: " << static_cast<char>('A' + (letter2 - 'a'));
  cout << endl;

  cout << "Please enter the first string: ";
  cin >> firstString;
  cout << "Please enter the second string: ";
  cin >> secondString;
  cout << "Concatenated Result: " << firstString + " " + secondString << endl;
  cout << endl;
  cout << "Thank you for using the Character and String Manipulation Program!";

  return 0;
}
