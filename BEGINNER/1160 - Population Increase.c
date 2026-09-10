#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int pa, pb, years = 0;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        
        while (pa <= pb) {
            pa += (int)(pa * g1 / 100);
            pb += (int)(pb * g2 / 100);
            years++;
            if (years > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        
        if (years <= 100) {
            printf("%d anos.\n", years);
        }
    }
    
    return 0;
}
