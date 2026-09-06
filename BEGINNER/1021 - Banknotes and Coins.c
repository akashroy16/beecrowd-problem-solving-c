#include <stdio.h>

int main() {
    double amount;
    scanf("%lf", &amount);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int)(amount / 100));
    amount = amount - ((int)(amount / 100)) * 100;
    printf("%d nota(s) de R$ 50.00\n", (int)(amount / 50));
    amount = amount - ((int)(amount / 50)) * 50;
    printf("%d nota(s) de R$ 20.00\n", (int)(amount / 20));
    amount = amount - ((int)(amount / 20)) * 20;
    printf("%d nota(s) de R$ 10.00\n", (int)(amount / 10));
    amount = amount - ((int)(amount / 10)) * 10;
    printf("%d nota(s) de R$ 5.00\n", (int)(amount / 5));
    amount = amount - ((int)(amount / 5)) * 5;
    printf("%d nota(s) de R$ 2.00\n", (int)(amount / 2));
    amount = amount - ((int)(amount / 2)) * 2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)(amount / 1));
    amount = amount - ((int)(amount / 1)) * 1;
    printf("%d moeda(s) de R$ 0.50\n", (int)(amount / 0.50));
    amount = amount - ((int)(amount / 0.50)) * 0.50;
    printf("%d moeda(s) de R$ 0.25\n", (int)(amount / 0.25));
    amount = amount - ((int)(amount / 0.25)) * 0.25;
    printf("%d moeda(s) de R$ 0.10\n", (int)(amount / 0.10));
    amount = amount - ((int)(amount / 0.10)) * 0.10;
    printf("%d moeda(s) de R$ 0.05\n", (int)(amount / 0.05));
    amount = amount - ((int)(amount / 0.05)) * 0.05;
    printf("%d moeda(s) de R$ 0.01\n", (int)(amount / 0.01));
    return 0;
}
