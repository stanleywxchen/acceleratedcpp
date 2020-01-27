/*
The complete framing program, as in the book.
Refactored to generate empty spaces beforehand.
*/

#include <iostream>
#include <string>

// Say what standard library names we use
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  
  int hpad;
  int vpad;
  cout << "Enter hpad: ";
  cin >> hpad;
  cout << "Enter vpad: ";
  cin >> vpad;
  
  const string greeting = "Hello, " + name + "!";
  const int rows = vpad * 2 + 3;
  const string::size_type cols = greeting.size() + hpad * 2 + 2;
  const string full_row(cols, '*');
  const string empty(cols - 2, ' ');
  const string hpad_space(hpad, ' ');
  
  cout << endl;
  for (int r = 0; r < rows; ++r) {
    string::size_type c = 0;
    if (r == 0 || r == rows - 1) {
      cout << full_row;
    } else if (r == vpad + 1) {
      cout << "*" << hpad_space << greeting << hpad_space << "*";
    } else {
      cout << "*" << empty << "*";
    }
    cout << endl;
  }
  return 0;
}