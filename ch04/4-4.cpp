/*
This program prints the square integer from 1 to 100, using setw(n) to align,
with widths computed dynamically.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  constexpr double max = 10.0;

  for (double i=1.0; i < max; i += 0.01) {
    int width1 = std::to_string(i).length();
    int width2 = std::to_string(i*i).length();
    std::cout << std::setw(width1) << i << std::setw(width2) << i*i << std::endl;
  }

  return 0;
}