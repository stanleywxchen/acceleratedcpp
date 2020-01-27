/*
This program computes and prints the quartiles of a set of integers.
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::cout << "Enter a list of numbers, followed by a EOF: " << std::endl;
  std::vector<int> vec;
  int num;
  while (std::cin >> num) {
    vec.push_back(num);
  }
  std::sort(vec.begin(), vec.end());

  float quartile_size = vec.size() / 4;

  int idx = 0;
  for (int quartile = 0; quartile < 4; ++quartile) {
    std::cout << "Quartile #" << quartile + 1 << ":" << std::endl;
    for (int i = 0; i < quartile_size; ++i) {
      std::cout << vec[idx++] << ", ";
    }
    std::cout << std::endl;
  }

  if (idx < vec.size()) {
    std::cout << vec[idx] << ", ";
  }
  return 0;
}