#include <stdio.h>

/* Q88: Replace spaces with hyphens. */
int main(void) {
    char text[1000];

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0'; index++) {
        if (text[index] == ' ') {
            text[index] = '-';
        }
    }
    fputs(text, stdout);
    return 0;
}
