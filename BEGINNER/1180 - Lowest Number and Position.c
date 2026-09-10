#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int min_value = X[0];
    int min_position = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < min_value) {
            min_value = X[i];
            min_position = i;
        }
    }

    printf("Menor valor: %d\n", min_value);
    printf("Posicao: %d\n", min_position);

    return 0;
}
