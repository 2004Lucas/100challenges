#include <stdio.h>
int main()
{
    int days;
    float cost_per_hour = 25, total_cost;
    printf("Enter the number of days worked in a month: ");
    scanf("%d", &days);

    total_cost = (days * 8) * cost_per_hour;
    printf("Total salary: R$%.2f\n", total_cost);
    return 0;
}
