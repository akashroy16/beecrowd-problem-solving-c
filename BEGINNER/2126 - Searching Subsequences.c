#include <stdio.h>
#include <string.h>

int main() {
    char sub[105], str[105];
    int case_num = 1;
    
    while (scanf("%s %s", sub, str) != EOF) {
        int sub_len = strlen(sub);
        int str_len = strlen(str);
        int count = 0;
        int last_pos = -1;
        
        for (int i = 0; i <= str_len - sub_len; i++) {
            int match = 1;
            for (int j = 0; j < sub_len; j++) {
                if (str[i + j] != sub[j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                count++;
                last_pos = i + 1;
            }
        }
        
        printf("Caso #%d:\n", case_num++);
        if (count > 0) {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n\n", last_pos);
        } else {
            printf("Nao existe subsequencia\n\n");
        }
    }
    return 0;
}
