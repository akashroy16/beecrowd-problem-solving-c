#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    float a, b, c, weighted_average;

    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &a, &b, &c);
        weighted_average = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n", weighted_average);
    }

    return 0;
}
