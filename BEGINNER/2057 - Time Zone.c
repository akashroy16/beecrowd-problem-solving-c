#include <stdio.h>

int main() {
    int s, t, f, r;
    scanf("%d %d %d", &s, &t, &f);
    r = s + t + f;
    if(r >= 24) r -= 24;
    if(r < 0) r += 24;
    printf("%d\n", r);
    return 0;
}
