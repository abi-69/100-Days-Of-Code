#include <stdio.h>

/* Q131: Print each day enum with its integer value. */
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main(void) { const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"}; for (int day = SUNDAY; day <= SATURDAY; day++) printf("%s = %d\n", names[day], day); return 0; }
