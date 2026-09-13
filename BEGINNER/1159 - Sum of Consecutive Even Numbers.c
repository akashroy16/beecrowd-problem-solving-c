#include <stdio.h>

int main() {
    int x;

    while (scanf("%d", &x) == 1 && x != 0) {
        int start;
        if (x % 2 == 0) {
            start = x;
        } else {
            start = x + 1;
        }

        int sum = start + (start + 2) + (start + 4) + (start + 6) + (start + 8);
        printf("%d\n", sum);
    }

    return 0;
}
