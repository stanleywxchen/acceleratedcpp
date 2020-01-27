/*
This program counts down from 10 to -5.
*/

#include <iostream>

int main() {
  int i = 10;
  while (i >= -5) {
    std::cout << i-- << std::endl;
  }
  return 0;
}