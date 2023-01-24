#include <stdio.h>

int main() {
    double width, height, area, paint_needed;
    printf("Enter the width of the wall: ");
    scanf("%lf", &width);
    printf("Enter the height of the wall: ");
    scanf("%lf", &height);

    area = width * height;
    paint_needed = area / 2;

    printf("The area to be painted is: %.2f square meters\n", area);
    printf("The amount of paint needed is: %.2f liters\n", paint_needed);
    return 0;
}
