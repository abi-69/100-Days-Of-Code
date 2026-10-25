#include <ctype.h>
#include <stdio.h>

/* Q127: Convert lowercase letters in input.txt to uppercase in output.txt. */
int main(void) {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (input == NULL || output == NULL) { puts("Could not open file"); return 1; }
    int character;
    while ((character = fgetc(input)) != EOF) fputc(toupper(character), output);
    fclose(input);
    fclose(output);
    return 0;
}
