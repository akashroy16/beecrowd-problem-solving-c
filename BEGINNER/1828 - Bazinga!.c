#include <stdio.h>
#include <string.h>

int vence(char *a, char *b) {
    return (strcmp(a, "tesoura") == 0 && (strcmp(b, "papel") == 0 || strcmp(b, "lagarto") == 0)) ||
           (strcmp(a, "papel") == 0 && (strcmp(b, "pedra") == 0 || strcmp(b, "Spock") == 0)) ||
           (strcmp(a, "pedra") == 0 && (strcmp(b, "lagarto") == 0 || strcmp(b, "tesoura") == 0)) ||
           (strcmp(a, "lagarto") == 0 && (strcmp(b, "Spock") == 0 || strcmp(b, "papel") == 0)) ||
           (strcmp(a, "Spock") == 0 && (strcmp(b, "tesoura") == 0 || strcmp(b, "pedra") == 0));
}

int main() {
    int T;
    char sheldon[10], raj[10];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%s %s", sheldon, raj);
        printf("Caso #%d: ", i);
        if (strcmp(sheldon, raj) == 0)
            printf("De novo!\n");
        else if (vence(sheldon, raj))
            printf("Bazinga!\n");
        else
            printf("Raj trapaceou!\n");
    }
    return 0;
}
