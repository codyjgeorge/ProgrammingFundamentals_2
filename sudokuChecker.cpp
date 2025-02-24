#include <cmath>
#include <iostream>

using namespace std;

const int rowSize = 3;
const int columnSize = 3;
const int rowSum = 6;
const int columnSum = 6;
int sudoku[rowSize][columnSize] = {};
void sum(int sudoku[rowSize][columnSize]);

int main() {

  cout << "Welcome to the Sudoku Checker! \nPlease enter your numbers from "
          "left to right, \nand top to bottom:"
       << endl;
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
  void sum(int sudoku[rowSize][columnSize]);
}
void sum(int sudoku[rowSize][columnSize]) {
  int sum = 0;
  for (int row = 0; row < rowSize; row++) {
    for (int column = 0; column < columnSize; column++) {
      sum += column;
    }

    if (sum != rowSum) {
      cout << "Failed on row " << row + 1 << endl;
    }
    sum = 0;
  }
}
