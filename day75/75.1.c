#include <stdio.h>

/* Q125: Append a line of text to an existing file. */
int main(void) {
    char filename[200], line[500];
    scanf("%199s", filename);
    getchar();
    fgets(line, sizeof(line), stdin);
    FILE *file = fopen(filename, "a");
    if (file == NULL) { puts("Could not open file"); return 1; }
    fputs(line, file);
    fclose(file);
    return 0;
}
