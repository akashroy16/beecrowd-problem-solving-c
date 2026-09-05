#include <stdio.h>

int main() {
    int employee_number, worked_hours;
    double hourly_rate, salary;

    scanf("%d", &employee_number);
    scanf("%d", &worked_hours);
    scanf("%lf", &hourly_rate);

    salary = worked_hours * hourly_rate;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
