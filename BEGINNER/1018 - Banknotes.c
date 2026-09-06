#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    printf("%d\n", N);

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int count = N / notes[i];
        N %= notes[i];
        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
    }

    return 0;
}
