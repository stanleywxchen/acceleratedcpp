/*
This program asks for a person's name, and greets them.
*/

#include <iostream>
#include <string>

int main() {
  // Asks for the person's name.
  std::cout << "Please enter your first name: ";

  // Read in the name.
  std::string name;
  std::cin >> name;

  // Writes a greeting.
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}