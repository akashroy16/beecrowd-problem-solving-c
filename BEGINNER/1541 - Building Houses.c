#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    while (1) {
        scanf("%d", &A);
        if (A == 0) break;
        scanf("%d %d", &B, &C);
        double area = (double)(A * B) * 100.0 / C;
        int land_side = (int)sqrt(area);
        printf("%d\n", land_side);
    }
    return 0;
}
