#include <iostream>

int main() {
    double grade1, grade2, average;
    std::cout << "Grade 1: ";
    std::cin >> grade1;
    std::cout << "Grade 2: ";
    std::cin >> grade2;
    average = (grade1 + grade2) / 2;
    std::cout << "The average between "
