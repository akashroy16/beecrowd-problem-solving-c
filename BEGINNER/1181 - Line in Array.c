#include <stdio.h>

int main() {
    int L;
    char T;
    float matrix[12][12];
    
    scanf("%d", &L);
    scanf(" %c", &T);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    
    float result = 0.0;
    for (int i = 0; i < 12; i++) {
        result += matrix[L][i];
    }
    
    if (T == 'S') {
        printf("%.1f\n", result);
    } else if (T == 'M') {
        printf("%.1f\n", result / 12);
    }

    return 0;
}
