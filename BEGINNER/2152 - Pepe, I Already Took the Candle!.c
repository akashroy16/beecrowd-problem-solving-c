#include <stdio.h>

int main() {
    int t, h, m, o;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            scanf("%d %d %d", &h, &m, &o);
            printf("%02d:%02d - %s\n", h, m, o == 1 ? "A porta abriu!" : "A porta fechou!");
        }
    }
    return 0;
}
