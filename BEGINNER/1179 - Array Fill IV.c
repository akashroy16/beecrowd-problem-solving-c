#include <stdio.h>

int main() {
    int par[5], impar[5];
    int par_count = 0, impar_count = 0;
    int num;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[par_count] = num;
            par_count++;
        } else {
            impar[impar_count] = num;
            impar_count++;
        }

        if (par_count == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            par_count = 0;
        }

        if (impar_count == 5) {
            for (int j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            impar_count = 0;
        }
    }

    for (int i = 0; i < impar_count; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < par_count; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
