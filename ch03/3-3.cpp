/*
This program counts how many times each distict word appears in its input.
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::cout << "Enter a list of words, followed by a EOF: " << std::endl;
  std::unordered_map<std::string, int> map;
  std::string str;
  while (std::cin >> str) {
    if (map.count(str) == 0) {
      map.insert({str, 1});
    } else {
      ++map[str];
    }
  }

  std::cout << "Word occurances: " << std::endl;
  for (auto pair : map) {
    std::cout << pair.first << " appeared " << pair.second << " times." 
              << std::endl;
  }
  return 0;
}