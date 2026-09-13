#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int mat[15][15];
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                mat[i][j] = (int)pow(2, i + j);
            }
        }

        int max_val = mat[N - 1][N - 1];
        int width = 0;
        while (max_val) {
            width++;
            max_val /= 10;
        }

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (j == 0)
                    printf("%*d", width, mat[i][j]);
                else
                    printf(" %*d", width, mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
