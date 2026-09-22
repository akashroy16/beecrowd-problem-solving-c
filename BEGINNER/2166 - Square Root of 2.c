#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        double ans = 0.0;
        for (int i = 0; i < n; i++) {
            ans += 2.0;
            ans = 1.0 / ans;
        }
        ans += 1.0;
        printf("%.10lf\n", ans);
    }
    return 0;
}
