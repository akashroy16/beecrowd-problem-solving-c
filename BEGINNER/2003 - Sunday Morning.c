#include <stdio.h>

int main() {
    int h, m;
    while (scanf("%d:%d", &h, &m) != EOF) {
        int delay = (h * 60 + m) - 420;
        if (delay < 0)
            delay = 0;
        printf("Atraso maximo: %d\n", delay);
    }
    return 0;
}
