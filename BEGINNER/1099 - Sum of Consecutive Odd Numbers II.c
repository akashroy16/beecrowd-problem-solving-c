#include <stdio.h>

int main() {
    int N, X, Y, i, j, sum;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        sum = 0;
        if(X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        for(j = X + 1; j < Y; j++) {
            if(j % 2 != 0)
                sum += j;
        }
        printf("%d\n", sum);
    }
    return 0;
}
