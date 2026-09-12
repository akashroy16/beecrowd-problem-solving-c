#include <stdio.h>

int main() {
    int numbers[100];
    int highest = -1; // Initialize with a value smaller than any positive integer
    int position = -1;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > highest) {
            highest = numbers[i];
            position = i + 1; // Input position is 1-based
        }
    }

    printf("%d\n", highest);
    printf("%d\n", position);

    return 0;
}
