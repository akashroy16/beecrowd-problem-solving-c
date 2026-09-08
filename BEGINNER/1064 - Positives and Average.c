#include <stdio.h>

int main() {
    float num, sum = 0;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            sum += num;
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;
}
