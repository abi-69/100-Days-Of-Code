#include <stdio.h>

/* Q133: Print the number of days in a month enum. */
enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
int main(void) { int month; scanf("%d", &month); int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; if (month >= 1 && month <= 12) printf("%d\n", days[month]); else puts("Invalid"); return 0; }
