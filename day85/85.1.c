#include <stdio.h>

/* Q135: Print enum values explicitly assigned from 10. */
enum Value { FIRST = 10, SECOND, THIRD };
int main(void) { printf("%d %d %d\n", FIRST, SECOND, THIRD); return 0; }
