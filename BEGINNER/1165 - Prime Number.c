#include <stdio.h>

int main() {
    int n, x, i, isPrime;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &x);
        isPrime = 1;
        
        if (x <= 1) {
            isPrime = 0;
        } else {
            for (i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        
        if (isPrime) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    
    return 0;
}
