#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The predecessor of " << num << " is " << num-1 << std::endl;
    std::cout << "The successor of " << num << " is " << num+1 << std::endl;
    return 0;
}
