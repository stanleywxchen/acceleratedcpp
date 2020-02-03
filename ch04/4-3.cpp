/*
This program prints the square integer from 1 to 100, using setw(n) to align,
with widths computed dynamically.
*/

#include <iostream>
#include <iomanip>

int FindWidth(int num) {
  int copy = num;
  int res = num < 0 ? 1 : 0;
  while (copy > 1) {
    copy /= 10;
    ++res;
  }
  return res;
}

int main() {
  constexpr int max = 1000;
  int width1 = 1 + FindWidth(max);
  int width2 = 1 + FindWidth(max * max);

  for (int i=1; i < max; ++i) {
    std::cout << std::setw(width1) << i << std::setw(width2) << i*i << std::endl;
  }

  return 0;
}