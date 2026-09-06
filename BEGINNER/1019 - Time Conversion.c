#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int hours = N / 3600;
    N %= 3600;

    int minutes = N / 60;
    int seconds = N % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
