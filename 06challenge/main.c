#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The predecessor of %d is %d\n", num, num-1);
    printf("The successor of %d is %d\n", num, num+1);
    return 0;
}
