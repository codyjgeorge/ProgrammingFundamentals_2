#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int rowSize = 0;
  int columnSize = 0;

  cout << "Welcome to the Sudoku Checker! \nPlease enter your number of rows:"
       << endl;
  cin >> rowSize;
  cout << "Please enter your number of columns: " << endl;
  cin >> columnSize;

  int sudoku[rowSize][columnSize];
  for (int row = 0; row < rowSize; row++) {
    for (int column = 0; column < columnSize; column++) {
      cout << "Enter number: ";
      cin >> sudoku[row][column];
    }
  }
  for (int row = 0; row < rowSize; row++) {
    for (int column = 0; column < columnSize; column++) {
      cout << sudoku[row][column];
    }
    cout << endl;
  }
}
