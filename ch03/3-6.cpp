
/*
This program, taken from the book, calculates a student's class average, but
takes into account if the user does not input any homework values.
*/

#include <iomanip> 
#include <ios> 
#include <iostream> 
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main() {
  // ask for and read the student's name 
  cout << "Please enter your first name: "; 
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;
  // ask for and read the midterm and final grades
  cout << "Please enter your midterm and final exam grades: " << endl;
  double midterm, final;
  cin >> midterm >> final;
  // ask for the homework grades
  cout << "Enter all your homework grades, followed by end-of-file: " << endl;
  // the number and sum of grades read so far 
  int count = 0;
  double sum = 0;
  // a variable into which to read 
  double x;
  // invariant:
  // we have read count grades so far, and
  // sum is the sum of the first count grades 
  while (cin >> x) {
    ++count;
    sum += x; 
  }
  if (count == 0) {
    cout << "Error: no homework values entered." << endl;
  } else {
    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3) 
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count 
         << setprecision(prec) << endl;
  }
  return 0; 
}