#include <iostream>

class Product {
private:
    double price;
    double discount;
    double final_price;

public:
    Product(double price) : price(price), discount(0.05) {
        calculate_final_price();
    }

    void calculate_final_price() {
        final_price = price - (price * discount);
    }

    void print_product() {
        std::cout << "Product price: " << price << std::endl;
        std::cout << "Promotional price: " << final_price << std::endl;
    }
};

int main() {
    double price;
    std::cout << "Enter the price of the product: ";
    std::cin >> price;

    Product product(price);
    product.print_product();
    return 0;
}
