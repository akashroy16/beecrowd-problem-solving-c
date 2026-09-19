#include <stdio.h>

int main() {
    int t, n;
    while (scanf("%d", &t) && t != 0) {
        for (int i = 0; i < t; i++) {
            scanf("%d", &n);
            if (n % 2 != 0) {
                printf("%d\n", n * 2 - 1);
            } else {
                printf("%d\n", n * 2 - 2);
            }
        }
    }
    return 0;
}
