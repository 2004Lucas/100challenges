#include <stdio.h>

int main() {
    double grade1, grade2, average;
    printf("Grade 1: ");
    scanf("%lf", &grade1);
    printf("Grade 2: ");
    scanf("%lf", &grade2);
    average = (grade1 + grade2) / 2;
    printf("The average between %.1lf and %.1lf is equal to %.1lf.\n", grade1, grade2, average);
    return 0;
}
