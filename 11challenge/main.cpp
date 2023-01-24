#include <iostream>
#include <string>

class Equation {
private:
    double a, b, c;
    std::string equation;
    double delta;

public:
    Equation(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
        //concatenate the equation in string format
        equation = std::to_string(a) + "x^2 + " + std::to_string(b) + "x + " + std::to_string(c) + " = 0";
        delta = (b*b) - 4*a*c;
    }
    //getter methods to get the private variables
    double getDelta() { return delta; }
    std::string getEquation() { return equation; }
};

int main() {
    double a, b, c;
    std::cout << "Enter the value of A: ";
    std::cin >> a;
    std::cout << "Enter the value of B: ";
    std::cin >> b;
    std::cout << "Enter the value of C: ";
    std::cin >> c;

    Equation eq(a, b, c);

    std::cout << "Equation: " << eq.getEquation() << std::endl;
    std::cout << "Delta: " << eq.getDelta() << std::endl;
    return 0;
}
