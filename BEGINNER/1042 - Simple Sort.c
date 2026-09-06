#include <stdio.h>

int main() {
    int a, b, c, sorted[3], original[3];

    scanf("%d %d %d", &a, &b, &c);

    original[0] = a;
    original[1] = b;
    original[2] = c;

    sorted[0] = a;
    sorted[1] = b;
    sorted[2] = c;

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", sorted[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\n", original[i]);
    }

    return 0;
}
