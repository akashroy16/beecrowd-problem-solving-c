#include <stdio.h>

int main() {
    int x;

    while (scanf("%d", &x) == 1 && x != 0) {
        for (int i = 1; i <= x; i++) {
            printf("%d", i);
            if (i < x) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
