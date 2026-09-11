#include <stdio.h>

int main() {
    char operation;
    double M[12][12];
    double sum = 0.0;
    int count = 0;

    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j > 11) {
                sum += M[i][j];
                count++;
            }
        }
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else if (operation == 'M') {
        if (count > 0) {
            printf("%.1lf\n", sum / count);
        }
    }

    return 0;
}
