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

  Contact(string newname, string newemail, int newphone) {
    name = newname;
    email = newemail;
    phone = newphone;
  }

  void setName() {
    cin >> name;
    cout << "\nName updated. Enter email:\n" << endl;
  }
  void setEmail() {
    cin >> email;
    cout << "\nEmail updated. Enter phone number:\n" << endl;
  }
  void setPhone() {
    cin >> phone;
    cout << "\nPhone Number updated.\n" << endl;
  }
  string const getName() { return name; }
  string const getEmail() { return email; }
  int const getPhone() { return phone; }
  void displaycontact() {
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone Number: " << phone << endl;
  }
};

int main() {

  string line;
  string filename;
  string readWrite;
  fstream contacts;
  Contact contactslist[10] = {};

  cout << "Welcome to the Personal Contact Manager!\n" << endl;

  // asks user to enter name of file
  cout << "Enter file name of contacts(ex: contacts.txt): " << endl;
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
  // while <filename> is open, asks user to enter 'R' or 'O' to read or
  // overwrite the file each option will end with closing the file
  do {
    cout << filename << " exists. Would you like to (R)ead or (O)verwrite it?"
         << endl;
    cin >> readWrite;

    // if user selects Read, do this
    if (readWrite == "R") {
      cout << "Reading contacts from " << filename << "..." << endl;

      // read <filename> until end of file, then close file
      while (!contacts.eof()) {
        getline(contacts, line, '#');
        cout << line << endl;
      }
      contacts.close();
      cout << "Contacts closed successfully." << endl;
    }

    // if user selects Overwrite, ask how many contacts to add
    else if (readWrite == "O") {
      cout << "How many contacts would you like to add(up to 10)?  " << endl;
      int loopControl;
      cin >> loopControl;

      // loops through each contact until designated number is reached
      // adds 'Contact' objects to contactslist array for temporary storage
      // displays the contact entered after all three data fields are complete
      for (int i = 0; i < loopControl; i++) {
        cout << "Enter the name, email and phone number(no spaces or hyphens) "
                "of contact number "
             << i + 1 << ": " << endl;
        contactslist[i].setName();
        contactslist[i].setEmail();
        contactslist[i].setPhone();
        cout << "\nYou entered:\n" << endl;
        contactslist[i].displaycontact();
        cout << endl;
      }

      // writes the array of contacts to <filename>
      cout << "Saving your changes..." << endl;
      contacts << contactslist;
      cout << "Contacts saved successfully." << endl;
      contacts.close();
      cout << "Contacts closed successfully." << endl;
    }

    // if user enters invalid answer, repeat the question
    else {
      cout << "Please enter 'R' or 'O'." << endl;
      cout << "Would you like to (R)ead or (O)verwrite " << filename << ": "
           << endl;
      cin >> readWrite;
    }

  } while (contacts.is_open());

  return 0;
}
