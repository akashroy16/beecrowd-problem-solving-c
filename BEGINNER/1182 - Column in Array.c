#include <stdio.h>

int main() {
    int C;
    char T;
    double M[12][12], result = 0.0;
    
    scanf("%d", &C);
    getchar();
    scanf("%c", &T);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        result += M[i][C];
    }

    if (T == 'M') {
        result /= 12.0;
    }

    printf("%.1f\n", result);

    return 0;
}
