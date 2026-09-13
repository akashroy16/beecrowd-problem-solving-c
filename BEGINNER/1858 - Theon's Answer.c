#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int T[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    
    int min_hits = T[0];
    int person = 1;
    
    for (int i = 1; i < N; i++) {
        if (T[i] < min_hits) {
            min_hits = T[i];
            person = i + 1;
        }
    }
    
    printf("%d\n", person);
    
    return 0;
}
