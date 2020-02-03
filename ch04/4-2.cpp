/*
This program prints the square integer from 1 to 100, using setw(n) to align.
*/

#include <iostream>
#include <iomanip>

int main() {
  for (int i=1; i <= 100; ++i) {
    std::cout << std::setw(4) << i << std::setw(8) << i*i << std::endl;
  }
  return 0;
}