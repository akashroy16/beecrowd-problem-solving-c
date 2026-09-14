#include <stdio.h>

int main() {
    int n, i, j, c = 1;
    while(scanf("%d", &n) != EOF) {
        int total = 1;
        for(i = 1; i <= n; i++)
            total += i;
        if(n == 0)
            printf("Caso %d: %d numero\n0\n\n", c++, total);
        else {
            printf("Caso %d: %d numeros\n0", c++, total);
            for(i = 1; i <= n; i++)
                for(j = 0; j < i; j++)
                    printf(" %d", i);
            printf("\n\n");
        }
    }
    return 0;
}
