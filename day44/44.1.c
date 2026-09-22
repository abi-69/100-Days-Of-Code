#include <ctype.h>
#include <stdio.h>

/* Q87: Count spaces, digits, and special characters. */
int main(void) {
    char text[1000];
    int spaces = 0;
    int digits = 0;
    int special = 0;

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0' && text[index] != '\n'; index++) {
        if (text[index] == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)text[index])) {
            digits++;
        } else if (!isalpha((unsigned char)text[index])) {
            special++;
        }
    }

    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n",
           spaces, digits, special);
    return 0;
}
