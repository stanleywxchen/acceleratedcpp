/*
This program reports the length of the longest and shortest word in the input.
*/

#include <iostream>
#include <string>

int main() {
  std::cout << "Enter a list of words, followed by a EOF: " << std::endl;
  std::string longest = "";
  std::string shortest = "";
  std::string str;
  while (std::cin >> str) {
    if (str.length() > longest.length() || longest == "") {
      longest = str;
    }
    if (str.length() < shortest.length() || shortest == "") {
      shortest = str;
    }
  }

  std::cout << "Longest word: " << longest << std::endl;
  std::cout << "Shortest word: " << shortest << std::endl;
  
  return 0;
}