#include <stdio.h>
#include <string.h>

int main() {
    char t[500];
    if (fgets(t, sizeof(t), stdin) != NULL) {
        int len = strlen(t);
        if (len > 0 && t[len - 1] == '\n') {
            t[len - 1] = '\0';
            len--;
        }
        
        if (len <= 140) {
            printf("TWEET\n");
        } else {
            printf("MUTE\n");
        }
    }
    return 0;
}
