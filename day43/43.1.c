#include <stdio.h>

/* Q85: Reverse a string. */
int main(void) {
    char text[1000];
    int length = 0;

    fgets(text, sizeof(text), stdin);
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }
    for (int index = length - 1; index >= 0; index--) {
        putchar(text[index]);
    }
    putchar('\n');
    return 0;
}
