#include <stdio.h>

/* Q81: Count characters without using strlen. */
int main(void) {
    char text[1000];
    int length = 0;

    fgets(text, sizeof(text), stdin);
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    printf("%d\n", length);
    return 0;
}
