#include <stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);

    while (count < 6) {
        if (x % 2 != 0) {
            printf("%d\n", x);
            count++;
        }
        x++;
    }

    return 0;
}
