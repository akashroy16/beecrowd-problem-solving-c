#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                printf("%3d", (i < j) ? j - i + 1 : i - j + 1);
                if (j != N) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
