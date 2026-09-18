#include <stdio.h>

int main() {
    double v, d;
    while (scanf("%lf %lf", &v, &d) != EOF) {
        double r = d / 2.0;
        double area = 3.14 * r * r;
        double height = v / area;
        
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
    return 0;
}
