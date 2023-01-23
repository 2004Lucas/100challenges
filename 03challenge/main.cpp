#include <iostream>
#include <string>

int main() {
    std::string name;
    double salary;
    std::cout << "Employee's name: ";
    std::getline(std::cin, name);
    std::cout << "Salary: ";
    std::cin >> salary;
    std::cout << "Employee " << name << " has a salary of R$ " << salary << " in June." << std::endl;
    return 0;
}
