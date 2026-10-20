#include <stdio.h>

/* Q122: Read and print all lines from info.txt using fgets. */
int main(void) {
    char line[500];
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) { puts("Could not open file"); return 1; }
    while (fgets(line, sizeof(line), file) != NULL) fputs(line, stdout);
    fclose(file);
    return 0;
}
