#include <stdio.h>

/* Q121: Save a user's name and age in info.txt using fprintf. */
int main(void) {
    char name[100];
    int age;
    FILE *file;
    scanf("%99s %d", name, &age);
    file = fopen("info.txt", "w");
    if (file == NULL) { puts("Could not open file"); return 1; }
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    puts("Data saved successfully");
    return 0;
}
