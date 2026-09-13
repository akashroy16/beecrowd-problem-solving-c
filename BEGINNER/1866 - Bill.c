#include <stdio.h>

int main() {
    int c, n, s;

    scanf("%d", &c);

    while (c--) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            s = 0;
        } else {
            s = 1;
        }
        printf("%d\n", s);
    }

    return 0;
}
