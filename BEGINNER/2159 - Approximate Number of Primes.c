#include <stdio.h>
#include <math.h>

int main() {
    double n;
    if (scanf("%lf", &n) == 1) {
        double min = n / log(n);
        double max = 1.25506 * (n / log(n));
        printf("%.1lf %.1lf\n", min, max);
    }
    return 0;
}
