#include <stdio.h>

/* Q137: Display a message for a user-role enum. */
enum Role { ADMIN, USER, GUEST };
int main(void) { int role; scanf("%d", &role); switch ((enum Role)role) { case ADMIN: puts("Administrator"); break; case USER: puts("User"); break; case GUEST: puts("Guest"); break; default: puts("Invalid"); } return 0; }
