#include <stdio.h>

/* Q126: Check whether a file exists and display its contents. */
int main(void) {
    char filename[200], line[500];
    scanf("%199s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) { puts("File does not exist"); return 1; }
    while (fgets(line, sizeof(line), file) != NULL) fputs(line, stdout);
    fclose(file);
    return 0;
}
