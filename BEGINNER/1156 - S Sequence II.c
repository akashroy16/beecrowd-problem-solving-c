#include <stdio.h>

int main() {
    double s = 0.0;
    int numerator;
    double denominator = 1.0;
    for (numerator = 1; numerator <= 39; numerator += 2) {
        s += numerator / denominator;
        denominator *= 2;
    }
    printf("%.2lf\n", s);
    return 0;
}
