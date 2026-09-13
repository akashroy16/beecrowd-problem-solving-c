#include <stdio.h>

int main() {
    char op;
    double M[12][12], sum = 0.0;
    int i, j;
    scanf(" %c", &op);
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    for (i = 7; i < 12; i++)
        for (j = 12 - i; j < i; j++)
            sum += M[i][j];
    if (op == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 30.0);
    return 0;
}
