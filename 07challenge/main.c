#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("The double of %.1lf is %.1lf\n", num, num*2);
    printf("The one-third of %.1lf is %.6lf\n", num, num/3);
    return 0;
}
