#include <stdio.h>
#include <string.h>

int main() {
    int c;
    char word[10005];
    
    if (scanf("%d", &c) == 1) {
        while (c--) {
            scanf("%s", word);
            double time = strlen(word) * 0.01;
            printf("%.2lf\n", time);
        }
    }
    return 0;
}
