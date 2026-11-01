#include <stdio.h>

/* Q134: Print a message for a status enum. */
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main(void) { int status; scanf("%d", &status); switch ((enum Status)status) { case SUCCESS: puts("Success"); break; case FAILURE: puts("Failure"); break; case TIMEOUT: puts("Timeout"); break; default: puts("Invalid"); } return 0; }
