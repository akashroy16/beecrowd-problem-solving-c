#include <stdio.h>
#include <math.h>

int main() {
    double n;
    if (scanf("%lf", &n) == 1) {
        double sqrt5 = sqrt(5.0);
        double ans = (pow((1.0 + sqrt5) / 2.0, n) - pow((1.0 - sqrt5) / 2.0, n)) / sqrt5;
        printf("%.1lf\n", ans);
    }
    return 0;
}
