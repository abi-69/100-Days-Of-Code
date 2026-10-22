#include <stdio.h>

/* Q124: Copy one file into another using fgetc and fputc. */
int main(void) {
    char source_name[200], destination_name[200];
    scanf("%199s %199s", source_name, destination_name);
    FILE *source = fopen(source_name, "r");
    FILE *destination = fopen(destination_name, "w");
    if (source == NULL || destination == NULL) { puts("Could not open file"); return 1; }
    int character;
    while ((character = fgetc(source)) != EOF) fputc(character, destination);
    fclose(source);
    fclose(destination);
    return 0;
}
