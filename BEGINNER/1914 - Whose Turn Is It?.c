#include <stdio.h>
#include <string.h>

int main() {
    int t, a, b;
    char p1[100], c1[10], p2[100], c2[10];
    scanf("%d", &t);
    while (t--) {
        scanf("%s %s %s %s", p1, c1, p2, c2);
        scanf("%d %d", &a, &b);
        if ((a + b) % 2 == 0) {
            if (strcmp(c1, "PAR") == 0)
                printf("%s\n", p1);
            else
                printf("%s\n", p2);
        } else {
            if (strcmp(c1, "IMPAR") == 0)
                printf("%s\n", p1);
            else
                printf("%s\n", p2);
        }
    }
    return 0;
}
