#include <ctype.h>
#include <stdio.h>

/* Q128: Count vowels and consonants in a text file. */
int main(void) {
    char filename[200];
    int character, vowels = 0, consonants = 0;
    scanf("%199s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) { puts("Could not open file"); return 1; }
    while ((character = fgetc(file)) != EOF) {
        if (isalpha(character)) {
            character = tolower(character);
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(file);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
