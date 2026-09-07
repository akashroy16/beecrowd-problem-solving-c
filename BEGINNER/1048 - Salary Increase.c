#include <stdio.h>

int main() {
    float salary, new_salary, reajuste_ganho;
    int percentual;

    scanf("%f", &salary);

    if (salary <= 400.00) {
        percentual = 15;
        reajuste_ganho = salary * 0.15;
    } else if (salary <= 800.00) {
        percentual = 12;
        reajuste_ganho = salary * 0.12;
    } else if (salary <= 1200.00) {
        percentual = 10;
        reajuste_ganho = salary * 0.10;
    } else if (salary <= 2000.00) {
        percentual = 7;
        reajuste_ganho = salary * 0.07;
    } else {
        percentual = 4;
        reajuste_ganho = salary * 0.04;
    }

    new_salary = salary + reajuste_ganho;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", reajuste_ganho);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
