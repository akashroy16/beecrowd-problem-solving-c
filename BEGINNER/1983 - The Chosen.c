#include <stdio.h>

int main() {
    int n, id, max_id;
    double grade, max_grade = -1.0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %lf", &id, &grade);
        if (grade > max_grade) {
            max_grade = grade;
            max_id = id;
        }
    }
    if (max_grade >= 8.0)
        printf("%d\n", max_id);
    else
        printf("Minimum note not reached\n");
    return 0;
}
