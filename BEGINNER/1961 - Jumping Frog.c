#include <stdio.h>

int main() {
    int p, n, h[100];
    scanf("%d %d", &p, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (abs(h[i] - h[i + 1]) > p) {
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}
