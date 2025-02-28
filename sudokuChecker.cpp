#include <iostream>

using namespace std;

const int rowSize = 9;
const int columnSize = 9;
const int rowSum = 45;
const int columnSum = 45;
const int total = 45;
int sudoku[rowSize][columnSize] = {};
void rowChecker(int sudoku[][columnSize], int rowSize);
void colChecker(int sudoku[][columnSize], int rowSize);
void gridChecker(int sudoku[][columnSize], int rowSize);

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
  rowChecker(sudoku, rowSize);
  colChecker(sudoku, rowSize);
  gridChecker(sudoku, rowSize);
  return 0;
}
void rowChecker(int sudoku[][columnSize], int rowSize) {
  int sum = 0;
  for (int row = 0; row < rowSize; row++) {
    for (int column = 0; column < columnSize; column++) {
      sum += sudoku[row][column];
    }

    if (sum != rowSum) {
      cout << "Failed on row " << row + 1 << endl;
    }
    sum = 0;
  }
}
void colChecker(int sudoku[][columnSize], int rowSize) {
  int sum = 0;
  for (int column = 0; column < columnSize; column++) {
    for (int row = 0; row < rowSize; row++) {
      sum += sudoku[row][column];
    }

    if (sum != columnSum) {
      cout << "Failed on column " << column + 1 << endl;
    }
    sum = 0;
  }
}
void gridChecker(int sudoku[][columnSize], int rowSize) {
  int sum = 0;
  for (int row = 0; row < 3; row++) {
    for (int column = 0; column < 3; column++) {
      sum += sudoku[row][column];
    }
  }
}
