#include <stdio.h>

int main() {
    int L, speed, max_speed;
    while (scanf("%d", &L) != EOF) {
        max_speed = 0;
        for (int i = 0; i < L; i++) {
            scanf("%d", &speed);
            if (speed > max_speed)
                max_speed = speed;
        }
        if (max_speed < 10)
            printf("1\n");
        else if (max_speed < 20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
