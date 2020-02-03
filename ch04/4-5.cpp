/*
This program uses a function that counts the words from an input stream.
*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::istream& ReadWords(std::istream& is, std::vector<std::string>& words) {
  if (is) {
    words.clear();
    std::string word;
    while (is >> word) {
      words.push_back(word);
    }
  }
  return is;
}

int main() {
  std::vector<std::string> words;
  ReadWords(std::cin, words);
  std::cout << "There are " << words.size() << " words in total." << std::endl;

  std::sort(words.begin(), words.end());

  if (!words.empty()) {
    int count = 1;
    std::string prev = "";
    for (int i = 0; i < words.size(); ++i) {
      if (i == 0) {
        prev = words[i];
      } else if (words[i] == prev) {
        ++count;
      } else {
        std::cout << prev << " appeared " << count << " times." << std::endl;
        count = 1;
        prev = words[i];
      }
    }
    std::cout << prev << " appeared " << count << " times." << std::endl;
  }

  return 0;
}