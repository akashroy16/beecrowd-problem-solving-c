#include <stdio.h>

int main() {
    char O;
    double M[12][12], result = 0.0;
    
    scanf("%c", &O);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            result += M[i][j];
        }
    }

    if (O == 'M') {
        result /= 66.0;
    }

    printf("%.1f\n", result);

    return 0;
}
