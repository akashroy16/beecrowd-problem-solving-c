#include <stdio.h>

int main() {
    int month, day;
    int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while (scanf("%d %d", &month, &day) != EOF) {
        if (month == 12 && day == 25) {
            printf("E natal!\n");
        } else if (month == 12 && day == 24) {
            printf("E vespera de natal!\n");
        } else if (month == 12 && day > 25) {
            printf("Ja passou!\n");
        } else {
            int total_days = 0;
            for (int m = month + 1; m < 12; m++) {
                total_days += days_in_month[m];
            }
            if (month == 12) {
                total_days += (25 - day);
            } else {
                total_days += (days_in_month[month] - day) + 25;
            }
            printf("Faltam %d dias para o natal!\n", total_days);
        }
    }
    return 0;
}
