#include <stdio.h>

int main() {
    float distance;
    printf("Enter a distance in meters: ");
    scanf("%f", &distance);
    float km = distance / 1000;
    float dam = distance / 10;
    float hm = distance / 100;
    float dm = distance * 10;
    float cm = distance * 100;
    float mm = distance * 1000;
    printf("The distance of %.1fm corresponds to:\n", distance);
    printf("%.5fKm\n", km);
    printf("%.4fDam\n", dam);
    printf("%.4fHm\n", hm);
    printf("%.1fDm\n", dm);
    printf("%.0fCm\n", cm);
    printf("%.0fMm\n", mm);
    return 0;
}
