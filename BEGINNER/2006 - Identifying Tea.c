#include <stdio.h>

int main() {
    int t, a, i, count = 0;
    scanf("%d", &t);
    for(i = 0; i < 5; i++) {
        scanf("%d", &a);
        if(a == t) count++;
    }
    printf("%d\n", count);
    return 0;
}
