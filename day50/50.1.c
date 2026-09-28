#include <stdio.h>

/* Q99: Change a date from dd/04/yyyy to dd-Apr-yyyy. */
int main(void) {
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);

    const char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%04d\n", day, months[month], year);
    }
    return 0;
}
