#include <stdio.h>

/* Q91: Remove all vowels from a string. */
int main(void) {
    char text[1000];
    fgets(text, sizeof(text), stdin);

    for (int index = 0; text[index] != '\0'; index++) {
        char letter = text[index];
        int vowel = letter == 'a' || letter == 'e' || letter == 'i' ||
                    letter == 'o' || letter == 'u' || letter == 'A' ||
                    letter == 'E' || letter == 'I' || letter == 'O' ||
                    letter == 'U';
        if (!vowel) {
            putchar(letter);
        }
    }
    return 0;
}
