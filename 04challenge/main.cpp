#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter a value: ";
    std::cin >> num1;
    std::cout << "Enter another value: ";
    std::cin >> num2;
    std::cout << "The sum between " << num1 << " and " << num2 << " is equal to " << num1 + num2 << "." << std::endl;
    return 0;
}
