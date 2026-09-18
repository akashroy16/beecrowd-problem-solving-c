#include <stdio.h>

int main() {
    char quote[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    
    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            putchar(quote[i]);
        }
        putchar('\n');
    }
    
    return 0;
}
