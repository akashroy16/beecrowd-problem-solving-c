#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int inner_start = n / 3;
        int inner_end = n - 1 - inner_start;
        int center = n / 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == center && j == center) {
                    printf("4");
                } else if (i >= inner_start && i <= inner_end && j >= inner_start && j <= inner_end) {
                    printf("1");
                } else if (i == j) {
                    printf("2");
                } else if (i + j == n - 1) {
                    printf("3");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
