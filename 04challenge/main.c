#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter a value: ");
    scanf("%d", &num1);
    printf("Enter another value: ");
    scanf("%d", &num2);
    printf("The sum between %d and %d is equal to %d.\n", num1, num2, num1 + num2);
    return 0;
}
