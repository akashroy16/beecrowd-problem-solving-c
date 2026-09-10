#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a = 0, b = 1, temp;
    for (i = 0; i < n; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}
