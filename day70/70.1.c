#include <ctype.h>
#include <stdio.h>

/* Q120: Change a string to sentence case. */
int main(void) {
    char text[1000];
    int first_letter = 1;
    fgets(text, sizeof(text), stdin);
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha((unsigned char)text[i])) {
            text[i] = (char)(first_letter ? toupper((unsigned char)text[i]) : tolower((unsigned char)text[i]));
            first_letter = 0;
        }
    }
    fputs(text, stdout);
    return 0;
}
