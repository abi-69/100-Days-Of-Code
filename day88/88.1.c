#include <stdio.h>

/* Q138: Print enum names and integer values using a loop. */
enum Level { LOW, MEDIUM, HIGH };
int main(void) { const char *names[] = {"LOW", "MEDIUM", "HIGH"}; for (int value = LOW; value <= HIGH; value++) printf("%s = %d\n", names[value], value); return 0; }
