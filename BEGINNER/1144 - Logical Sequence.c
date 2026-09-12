#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        long long square = (long long)i * i;
        long long cube = (long long)i * i * i;
        printf("%d %lld %lld\n", i, square, cube);
        printf("%d %lld %lld\n", i, square + 1, cube + 1);
    }

    return 0;
}
