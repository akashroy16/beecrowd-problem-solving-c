#include <stdio.h>

int main() {
    double score1, score2;
    int valid_scores = 0;
    int new_calculation;

    while (1) {
        while (valid_scores < 2) {
            double score;
            scanf("%lf", &score);
            if (score >= 0.0 && score <= 10.0) {
                if (valid_scores == 0) {
                    score1 = score;
                } else {
                    score2 = score;
                }
                valid_scores++;
            } else {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2lf\n", (score1 + score2) / 2.0);
        printf("novo calculo (1-sim 2-nao)\n");

        while (1) {
            scanf("%d", &new_calculation);
            if (new_calculation == 1) {
                valid_scores = 0;
                break;
            } else if (new_calculation == 2) {
                return 0;
            } else {
                printf("novo calculo (1-sim 2-nao)\n");
            }
        }
    }

    return 0;
}
