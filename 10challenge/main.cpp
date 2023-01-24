#include <iostream>

int main() {
    double width, height, area, paintNeeded;
    std::cout << "Enter the width of the wall: ";
    std::cin >> width;
    std::cout << "Enter the height of the wall: ";
    std::cin >> height;

    area = width * height;
    paintNeeded = area / 2;

    std::cout << "The area to be painted is: " << area << " square meters" << std::endl;
    std::cout << "The amount of paint needed is: " << paintNeeded << " liters" << std::endl;
    return 0;
}
