#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    double salary;
    printf("Employee's name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = 0;
    printf("Salary: ");
    scanf("%lf", &salary);
    printf("Employee %s has a salary of R$ %.2lf in June.\n", name, salary);
    return 0;
}
