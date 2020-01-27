/*
This program prints a square, rectangle, and a triangle using *'s.
*/

#include <iostream>
#include <string>

int main() {
  {
    // Printing a square.
    const int length = 3;
    const std::string line(length, '*');
    for (int i = 0; i < length; ++i) {
      std::cout << line << std::endl;
    }
  }

  std::cout << std::endl;

  {
    // Printing a rectangle.
    const int length = 5;
    const int width = 4;
    const std::string line(width, '*');
    for (int i = 0; i < length; ++i) {
      std::cout << line << std::endl;
    }
  }

  std::cout << std::endl;

  {
    // Printing a triangle.
    const int height = 5;
    std::string line = "";
    for (int i = 0; i < height; ++i) {
      line += '*';
      std::cout << line << std::endl;
    }
  }
}