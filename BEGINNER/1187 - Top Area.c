#include <stdio.h>

int main() {
    char op;
    double M[12][12], sum = 0.0;
    int i, j;
    scanf(" %c", &op);
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 11 - i; j++)
            sum += M[i][j];
    if (op == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 30.0);
    return 0;
}
