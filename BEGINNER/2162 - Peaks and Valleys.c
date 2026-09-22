#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int a[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int valid = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                valid = 0;
                break;
            }
            if (i > 1) {
                if ((a[i - 1] > a[i - 2] && a[i] >= a[i - 1]) || 
                    (a[i - 1] < a[i - 2] && a[i] <= a[i - 1])) {
                    valid = 0;
                    break;
                }
            }
        }
        printf("%d\n", valid);
    }
    return 0;
}
