#include <stdio.h>

/* Q84: Convert lowercase string to uppercase without built-in functions. */
int main(void) {
    char text[1000];

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0'; index++) {
        if (text[index] >= 'a' && text[index] <= 'z') {
            text[index] = (char)(text[index] - 'a' + 'A');
        }
    }

    fputs(text, stdout);
    return 0;
}
