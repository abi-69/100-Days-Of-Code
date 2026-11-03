#include <stdio.h>

/* Q136: Perform an operation selected by an enum menu. */
enum Operation { ADD = 1, SUBTRACT, MULTIPLY };
int main(void) { int choice, first, second; scanf("%d %d %d", &choice, &first, &second); switch ((enum Operation)choice) { case ADD: printf("%d\n", first + second); break; case SUBTRACT: printf("%d\n", first - second); break; case MULTIPLY: printf("%d\n", first * second); break; default: puts("Invalid"); } return 0; }
