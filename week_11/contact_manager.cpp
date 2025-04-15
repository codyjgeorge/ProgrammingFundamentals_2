#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// creates class for object 'contact' with name, email and phone number
class Contact {

private:
  string email;
  double phone;

public:
  string name;

  Contact() {
    name = "John Doe";
    email = "johndoe@neovim.com";
    phone = 5551239876;
  }

  Contact(string newname, string newemail, double newphone) {
    name = newname;
    email = newemail;
    phone = newphone;
  }
};

int main() {
  string filename;
  string readWrite;
  fstream contacts;

  cout << "Welcome to the Personal Contact Manager!" << endl;

  // asks user to enter name of file
  cout << "Enter file name of contacts: " << endl;
  cin >> filename;

  // opens user entered file name
  contacts.open(filename.c_str());

  // asks user to enter a valid file name until a file successfully opens
  while (contacts.fail()) {
    cout << filename << " does not exist." << endl;
    cout << "Enter file name of contacts: " << endl;
    cin >> filename;
    contacts.open(filename.c_str());
  }

  while (contacts.is_open()) {
    cout << filename << " exists. Would you like to (R)ead or (O)verwrite it?"
         << endl;
    cin >> readWrite;
  }
  if (readWrite == "R") {
    cout << "Reading contacts from " << filename << "..." << endl;
  } else if (readWrite == "O") {
    cout << "Enter contact info" << endl;
  } else {
    cout << "Please enter 'R' or 'O'." << endl;
    cout << "Would you like to (R)ead or (O)verwrite " << filename << ": "
         << endl;
  }

  return 0;
}
