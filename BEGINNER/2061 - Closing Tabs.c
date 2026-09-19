#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    char action[10];
    
    if (scanf("%d %d", &n, &m) == 2) {
        for (int i = 0; i < m; i++) {
            scanf("%s", action);
            if (strcmp(action, "fechou") == 0) {
                n++;
            } else if (strcmp(action, "clicou") == 0) {
                n--;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
