#include <stdio.h>

int main() {
    int n, code, qty;
    float total = 0.0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &code, &qty);
        if (code == 1001)
            total += 1.50 * qty;
        else if (code == 1002)
            total += 2.50 * qty;
        else if (code == 1003)
            total += 3.50 * qty;
        else if (code == 1004)
            total += 4.50 * qty;
        else if (code == 1005)
            total += 5.50 * qty;
    }
    printf("%.2f\n", total);
    return 0;
}
