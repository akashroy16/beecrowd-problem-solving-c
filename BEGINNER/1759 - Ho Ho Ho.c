#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i < N)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}
