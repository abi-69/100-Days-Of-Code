#include <stdio.h>
#include <ctype.h>

/* Q97: Print the initials of a name. */
int main(void) {
    char name[200];
    int new_word = 1;

    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (isspace((unsigned char)name[i])) {
            new_word = 1;
        } else if (new_word) {
            printf("%c", (char)toupper((unsigned char)name[i]));
            new_word = 0;
        }
    }
    putchar('\n');
    return 0;
}
