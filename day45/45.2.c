#include <stdio.h>

/* Q90: Toggle case of every alphabetic character. */
int main(void) {
    char text[1000];

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0'; index++) {
        if (text[index] >= 'a' && text[index] <= 'z') {
            text[index] = (char)(text[index] - 'a' + 'A');
        } else if (text[index] >= 'A' && text[index] <= 'Z') {
            text[index] = (char)(text[index] - 'A' + 'a');
        }
    }

    fputs(text, stdout);
    return 0;
}
