#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = 0;
    printf("Hello %s, nice to meet you!\n", name);
    return 0;
}
