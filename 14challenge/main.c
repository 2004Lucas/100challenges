#include <stdio.h>

int main() {
    int days, kilometers;
    float cost_per_day = 90, cost_per_kilometer = 0.20, total_cost;

    printf("Enter the number of days the car was rented: ");
    scanf("%d", &days);
    printf("Enter the number of kilometers driven: ");
    scanf("%d", &kilometers);

    total_cost = (days * cost_per_day) + (kilometers * cost_per_kilometer);
    printf("Total cost to be paid: R$%.2f\n", total_cost);
    return 0;
}
