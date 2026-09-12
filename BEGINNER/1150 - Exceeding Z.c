#include <stdio.h>

int main() {
    int x, z;
    scanf("%d", &x);

    while (1) {
        scanf("%d", &z);
        if (z > x) {
            break;
        }
    }

    int sum = x;
    int count = 1;
    int current = x + 1;

    while (sum <= z) {
        sum += current;
        count++;
        current++;
    }

    printf("%d\n", count);
    return 0;
}
