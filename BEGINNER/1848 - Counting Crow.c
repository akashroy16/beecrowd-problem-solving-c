#include <stdio.h>
#include <string.h>

int blink_to_binary(char blink[4]) {
    int value = 0;
    if (blink[0] == '*') value += 4;
    if (blink[1] == '*') value += 2;
    if (blink[2] == '*') value += 1;
    return value;
}

int main() {
    char input[10];
    int sum = 0;
    int result_count = 0;

    while (scanf("%s", input) != EOF) {
        if (strcmp(input, "caw") == 0) {
            scanf("%s", input);
            printf("%d\n", sum);
            result_count++;
            sum = 0;
        } else {
            sum += blink_to_binary(input);
        }
    }

    return 0;
}
