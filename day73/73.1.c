#include <ctype.h>
#include <stdio.h>

/* Q123: Count characters, words, and lines in a text file. */
int main(void) {
    char filename[200];
    int character, in_word = 0, words = 0, lines = 0, characters = 0;
    scanf("%199s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) { puts("Could not open file"); return 1; }
    while ((character = fgetc(file)) != EOF) {
        characters++;
        if (character == '\n') lines++;
        if (isspace(character)) in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
    }
    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
