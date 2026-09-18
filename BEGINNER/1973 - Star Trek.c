#include <stdio.h>

long long sheep[1000005];
int visited[1000005];

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long total_sheep = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &sheep[i]);
        total_sheep += sheep[i];
    }

    int i = 0;
    int visited_count = 0;

    while (i >= 0 && i < n) {
        if (!visited[i]) {
            visited[i] = 1;
            visited_count++;
        }

        int is_odd = (sheep[i] % 2 != 0);

        if (sheep[i] > 0) {
            sheep[i]--;
            total_sheep--;
        }

        if (is_odd) {
            i++;
        } else {
            i--;
        }
    }

    printf("%d %lld\n", visited_count, total_sheep);
    return 0;
}
