/*
This program calculates the product of the numbers in the range [1, 10).
*/

#include <iostream>

int main() {
  int product = 1;
  for (int i = 1; i < 10; ++i) {
    product *= i;
  }
  std::cout << "9! is " << product << std::endl;
}