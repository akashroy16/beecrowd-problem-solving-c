#include <stdio.h>

int main() {
    char name[100];
    double fixed_salary, total_sales, total_salary;

    scanf("%s", name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sales);

    total_salary = fixed_salary + (total_sales * 0.15);

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}
