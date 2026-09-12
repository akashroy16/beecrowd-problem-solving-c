#include <stdio.h>

int main() {
    int x, y, start, end;

    scanf("%d %d", &x, &y);

    if (x < y) {
        start = x;
        end = y;
    } else {
        start = y;
        end = x;
    }

    for (int i = start + 1; i < end; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
