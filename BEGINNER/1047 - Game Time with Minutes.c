#include <stdio.h>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int total_start_minutes, total_end_minutes, duration_minutes, hours, minutes;

    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);

    total_start_minutes = start_hour * 60 + start_minute;
    total_end_minutes = end_hour * 60 + end_minute;

    if (total_end_minutes <= total_start_minutes) {
        total_end_minutes += 24 * 60;
    }

    duration_minutes = total_end_minutes - total_start_minutes;
    hours = duration_minutes / 60;
    minutes = duration_minutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
