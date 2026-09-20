#include <ctype.h>
#include <stdio.h>

/* Q83: Count vowels and consonants. */
int main(void) {
    char text[1000];
    int vowels = 0;
    int consonants = 0;

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0'; index++) {
        if (isalpha((unsigned char)text[index])) {
            char letter = (char)tolower((unsigned char)text[index]);
            if (letter == 'a' || letter == 'e' || letter == 'i' ||
                letter == 'o' || letter == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
