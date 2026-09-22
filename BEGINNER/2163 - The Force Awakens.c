#include <stdio.h>

int grid[1005][1005];

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &grid[i][j]);
            }
        }

        int r = 0, c = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                if (grid[i][j] == 42) {
                    if (grid[i-1][j-1] == 7 && grid[i-1][j] == 7 && grid[i-1][j+1] == 7 &&
                        grid[i][j-1]   == 7 &&                      grid[i][j+1]   == 7 &&
                        grid[i+1][j-1] == 7 && grid[i+1][j] == 7 && grid[i+1][j+1] == 7) {
                        r = i + 1;
                        c = j + 1;
                        break;
                    }
                }
            }
            if (r != 0) break;
        }

        printf("%d %d\n", r, c);
    }
    return 0;
}
