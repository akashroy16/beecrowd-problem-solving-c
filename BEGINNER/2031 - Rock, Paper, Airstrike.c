#include <stdio.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char p1[15], p2[15];

    while (n--) {
        scanf("%s %s", p1, p2);

        if (strcmp(p1, "ataque") == 0) {
            if (strcmp(p2, "ataque") == 0) {
                printf("Aniquilacao mutua\n");
            } else {
                printf("Jogador 1 venceu\n");
            }
        } else if (strcmp(p1, "pedra") == 0) {
            if (strcmp(p2, "ataque") == 0) {
                printf("Jogador 2 venceu\n");
            } else if (strcmp(p2, "pedra") == 0) {
                printf("Sem ganhador\n");
            } else {
                printf("Jogador 1 venceu\n");
            }
        } else if (strcmp(p1, "papel") == 0) {
            if (strcmp(p2, "papel") == 0) {
                printf("Ambos venceram\n");
            } else {
                printf("Jogador 2 venceu\n");
            }
        }
    }

    return 0;
}
