#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double price;
    double discount;
    double final_price;
} Product;

void calculate_final_price(Product *product) {
    product->final_price = product->price - (product->price * product->discount);
}

void print_product(Product *product) {
    printf("Product price: %.2f\nPromotional price: %.2f\n", product->price, product->final_price);
}

int main() {
    Product product;
    product.discount = 0.05;
    printf("Enter the price of the product: ");
    scanf("%lf", &product.price);

    calculate_final_price(&product);
    print_product(&product);

    return 0;
}
