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
bool gridChecker(int sudoku[][columnSize]);

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
  if (gridChecker(sudoku) == true) {
    cout << "Valid Sudoku" << endl;
  } else {
    cout << "Invalid Sudoku" << endl;
  }
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
    } else {
      cout << "Row " << row + 1 << "'s total is " << sum << endl;
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
    } else {
      cout << "Column " << column + 1 << "'s total is " << sum << endl;
    }
    sum = 0;
  }
}
bool gridChecker(int sudoku[][columnSize]) {
  int counter = 0;
  int startRow = 0;
  int startCol = 0;
  int endRow = 3;
  int endCol = 3;
  int sum = 0;
  while (counter < 9) {
    sum = 0;
    for (int row = startRow; row < endRow; row++) {
      for (int column = startCol; column < endCol; column++) {
        sum += sudoku[row][column];
      }
    }
    if (sum != 45) {
      return false;
    }
    counter++;
    cout << "Grid " << counter << "'s total is " << sum << endl;
    startCol += 3;
    endCol += 3;
    if (startCol == 9) {
      startCol = 0;
      endCol = 3;
      startRow += 3;
      endRow += 3;
    } else if (startRow == 9) {
      break;
    }
  }
  if (sum == 45) {
    return true;
  } else {
    return false;
  }
}
