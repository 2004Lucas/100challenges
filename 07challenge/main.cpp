#include <iostream>

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The double of " << num << " is " << num*2 << std::endl;
    std::cout << "The one-third of " << num << " is " << num/3 << std::endl;
    return 0;
}
