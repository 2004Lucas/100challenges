#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double a, b, c;
    char equation[50];
    double delta;
} Equation;

void calculateDelta(Equation *eq) {
    eq->delta = (eq->b * eq->b) - 4 * eq->a * eq->c;
}

void setEquation(Equation *eq) {
    snprintf(eq->equation, 50, "%fx^2 + %fx + %f = 0", eq->a, eq->b, eq->c);
}

void printEquation(Equation *eq) {
    printf("Equation: %s\n", eq->equation);
    printf("Delta: %f\n", eq->delta);
}

int main() {
    Equation eq;
    printf("Enter the value of A: ");
    scanf("%lf", &eq.a);
    printf("Enter the value of B: ");
    scanf("%lf", &eq.b);
    printf("Enter the value of C: ");
    scanf("%lf", &eq.c);

    calculateDelta(&eq);
    setEquation(&eq);
    printEquation(&eq);
    return 0;
}
