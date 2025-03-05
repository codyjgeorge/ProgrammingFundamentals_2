#include <iostream>

using namespace std;

bool gridChecker(int validSudoku[][9]);
const int total = 45;

int main() {

  int validSudoku[9][9] = {
      {8, 2, 7, 1, 5, 4, 3, 9, 6}, {9, 6, 5, 3, 2, 7, 1, 4, 8},
      {3, 4, 1, 6, 8, 9, 7, 5, 2}, {5, 9, 3, 4, 6, 8, 2, 7, 1},
      {4, 7, 2, 5, 1, 3, 6, 8, 9}, {6, 1, 8, 9, 7, 2, 4, 3, 5},
      {7, 8, 6, 2, 3, 5, 9, 1, 4}, {1, 5, 4, 7, 9, 6, 8, 2, 3},
      {2, 3, 9, 8, 4, 1, 5, 6, 7}};

  if (gridChecker(validSudoku) == true) {
    cout << "Valid Sudoku" << endl;
  } else {
    cout << "Invalid Sudoku" << endl;
  }
}

bool gridChecker(int validSudoku[][9]) {
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
        sum += validSudoku[row][column];
      }
    }
    if (sum != 45) {
      return false;
    }
    cout << sum << endl;
    counter++;
    cout << counter << endl;
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
