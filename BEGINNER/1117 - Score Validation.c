#include <stdio.h>

int main() {
    float nota, soma = 0;
    int count = 0;
    while (count < 2) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            count++;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", soma / 2);
    return 0;
}
