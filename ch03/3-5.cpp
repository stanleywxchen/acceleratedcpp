/*
This program calculates a number of students' class average.
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> names;
  std::vector<float> gpas;
  std::string name;
  constexpr int num_homework = 5;

  while (true) {
    std::cout << "Enter a student's name, or an EOF. " << std::endl;
    if (!(std::cin >> name)) {
      break;
    }
    names.push_back(name);
    std::cout << "Please enter midterm and final exam grades: " << std::endl;
    float midterm, final;
    std::cin >> midterm >> final;
    std::cout << "Enter all 5 homework grades: " << std::endl;
    int sum = 0;
    int num;
    for (int i = 0; i < num_homework; ++i) {
      std::cin >> num;
      sum += num;
    }

    // Grading scheme
    float gpa = 0.2 * midterm + 0.4 * final + 0.4 * sum / num_homework;
    gpas.push_back(gpa);
  }

  for (int i = 0; i < names.size(); ++i) {
    std::cout << names[i] << " has a gpa of " << gpas[i] << "." << std::endl;
  }

  return 0;
}