#include <stdio.h>

/* Q139: Show that enum values are stored as integers. */
enum Number { ZERO = 0, FIVE = 5, TEN = 10 };
int main(void) { enum Number value = TEN; printf("%d\n", value); return 0; }
