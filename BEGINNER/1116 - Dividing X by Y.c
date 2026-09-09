#include <stdio.h>

int main() {
    int N, X, Y, i;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        if(Y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (float)X / Y);
    }
    return 0;
}
