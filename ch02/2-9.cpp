/*
This program asks the user to enter two numbers and tells the user which number
is larger than the other.
*/

#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter a number: " << std::endl;
  std::cin >> a;
  std::cout << "Enter another number: ";
  std::cin >> b;

  if (a > b) {
    std::cout << a << " is larger than " << b << std::endl;
  } else if (b > a) {
    std::cout << b << " is larger than " << a << std::endl;
  } else {
    std::cout << "They are equal" << std::endl;
  }
  return 0;
}
