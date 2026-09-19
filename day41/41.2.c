#include <stdio.h>

/* Q82: Print each character on a new line. */
int main(void) {
    char text[1000];

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0' && text[index] != '\n'; index++) {
        printf("%c\n", text[index]);
    }
    return 0;
}
