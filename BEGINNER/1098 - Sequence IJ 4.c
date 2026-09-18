#include <stdio.h>

int main() {
    for (int i = 0; i <= 20; i += 2) {
        float I = i / 10.0;
        for (int j = 1; j <= 3; j++) {
            float J = j + I;
            if (i == 0 || i == 10 || i == 20) {
                printf("I=%.0f J=%.0f\n", I, J);
            } else {
                printf("I=%.1f J=%.1f\n", I, J);
            }
        }
    }
    return 0;
}
