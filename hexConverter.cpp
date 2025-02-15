#include <cctype>
#include <iostream>

using namespace std;

const int MAX_LENGTH = 8;
bool hasError = false;

bool validateHexInput(string &hexNum);
int hextoDecimal(char hexDigit, bool torf);
int hextoDecimal(char hexDigit);
inline int updateDecimal(int &decimal, const int &digitValue);
inline void displayResults(string &hexNumber, int &decimalResults);

int main() {
  string hexNumber;

  cout << "Enter a hexadecimal number (max " << MAX_LENGTH << " digits): ";
  cin >> hexNumber;
  if (validateHexInput(hexNumber)) {
    int decimal = 0;
    for (char c : hexNumber) {
      int digitValue = hextoDecimal(c, islower(c));
      decimal = updateDecimal(decimal, digitValue);
    }

    displayResults(hexNumber, decimal);
  } else {
    cout << "Invalid hexadecimal number! Please try again." << endl;
  }

  return 0;
}

bool validateHexInput(string &hexNum) {
  if (hexNum.length() == 0 || hexNum.length() > MAX_LENGTH) {
    hasError = true;
    return false;
  }

  for (char c : hexNum) {
    if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') ||
          (c >= 'a' && c <= 'f'))) {
      hasError = true;
      return false;
    }
  }
  return true;
}
int hextoDecimal(char hexDigit, bool isLower) {
  if (isLower) {
    return hexDigit - 'a' + 10;
  }
  return hextoDecimal(hexDigit);
}

int hextoDecimal(char hexDigit) {
  if (hexDigit >= '0' && hexDigit <= '9') {
    return hexDigit - '0';
  } else {
    return hexDigit - 'A' + 10;
  }
}

inline int updateDecimal(int &decimal, const int &digitValue) {
  static int multiplier = 16;
  return decimal * multiplier + digitValue;
}

inline void displayResults(string &hexNumber, int &decimalResults) {
  cout << "Original Hex String Value: " << hexNumber << endl;
  cout << "Total Decimal Value Results: " << decimalResults << endl;
}
