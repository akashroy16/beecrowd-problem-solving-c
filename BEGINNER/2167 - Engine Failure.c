#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int prev, curr, drop_index = 0;
        scanf("%d", &prev);
        
        for (int i = 2; i <= n; i++) {
            scanf("%d", &curr);
            if (curr < prev && drop_index == 0) {
                drop_index = i;
            }
            prev = curr;
        }
        
        printf("%d\n", drop_index);
    }
    return 0;
}
