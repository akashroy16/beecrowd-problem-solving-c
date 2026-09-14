#include <stdio.h>

int main() {
    int n, y;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &y);
        if (y < 2015)
            printf("%d D.C.\n", 2015 - y);
        else
            printf("%d A.C.\n", y - 2014);
    }
    return 0;
}
