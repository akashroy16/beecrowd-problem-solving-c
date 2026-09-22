#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }
        
        if (len <= 80) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
