#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int stringLength = 0;
void charCounter(const string userString);
void displayLetter(const int result[], const string alph);

int main() {
  string userString;
  cout << "Enter a string: ";
  cin >> userString;
  cout << "\nLetter Frequencies: " << endl;

  charCounter(userString);

  return 0;
}

void charCounter(const string userString) {
  const string alph = "abcdefghijklmnopqrstuvwxyz";
  int result[26] = {0};
  int stringLength = userString.length();

  for (int i = 0; i < stringLength; i++) {
    int position =
        alph.find(userString[i]); // takes the letter from userString the loop
                                  // is currently on, finds it in string alph,
                                  // and assigns the index to position
    result[position]++;
  }
  int idx = 0;
  for (int count : result) {
    cout << alph[idx] << ": " << count << endl;
    idx++;
  }

  displayLetter(result, alph);

  cout << "\nSorted Letters" << endl;
  for (int i = 0; i < 25; i++) {
    if (result[i] > 0) {
      cout << alph[i] << ": " << result[i] << endl;
    }
  }
}
void displayLetter(const int result[], const string alph) {
  int max = 0;
  int idx = 0;
  for (int i = 0; i < 25; i++) {
    if (result[i] > max) {
      max = result[i];
      idx = i;
    }
  }
  cout << "The letter most frequently appearing is " << alph[idx]
       << " and appears " << max << " times!" << endl;
}
