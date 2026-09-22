#include <stdio.h>

int grid[105][105];

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                scanf("%d", &grid[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int cameras = grid[i][j] + grid[i][j+1] + grid[i+1][j] + grid[i+1][j+1];
                if (cameras >= 2) {
                    printf("S");
                } else {
                    printf("U");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
