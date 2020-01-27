/*
The complete framing program, as in the book.
Edited to have separate padding sizes for vertical and horizontal.
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
  const string greeting = "Hello, " + name + "!";
  const int hpad = 1;
  const int vpad = 2;
  const int rows = vpad * 2 + 3;
  const string::size_type cols = greeting.size() + hpad * 2 + 2;
  cout << endl;

  for (int r = 0; r < rows; ++r) {
    string::size_type c = 0;
    while (c < cols) {
      if (r == vpad + 1 && c == hpad + 1) {
        cout << greeting;
        c += greeting.size();
      } else {
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
        ++c;
      }
    }
    cout << endl;
  }
  return 0;
}