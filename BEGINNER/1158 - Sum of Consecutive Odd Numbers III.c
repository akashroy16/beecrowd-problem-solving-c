#include <stdio.h>

int main() {
    int n, x, y, sum, i;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        sum = 0;
        if (x % 2 == 0) {
            x++;
        }
        for (i = 0; i < y; i++) {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
