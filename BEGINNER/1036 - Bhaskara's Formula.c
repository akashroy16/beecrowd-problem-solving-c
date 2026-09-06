#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double discriminant = B * B - 4 * A * C;

    if (A == 0 || discriminant < 0) {
        printf("Impossivel calcular\n");
    } else {
        double sqrt_discriminant = sqrt(discriminant);
        double R1 = (-B + sqrt_discriminant) / (2 * A);
        double R2 = (-B - sqrt_discriminant) / (2 * A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

    return 0;
}
