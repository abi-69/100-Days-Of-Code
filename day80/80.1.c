#include <stdio.h>

/* Q130: Store and display student records using fprintf and fscanf. */
int main(void) {
    int count;
    char name[100];
    int roll, marks;
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) return 1;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) { scanf("%99s %d %d", name, &roll, &marks); fprintf(file, "%s %d %d\n", name, roll, marks); }
    fclose(file);
    file = fopen("students.txt", "r");
    while (fscanf(file, "%99s %d %d", name, &roll, &marks) == 3) printf("%s %d %d\n", name, roll, marks);
    fclose(file);
    return 0;
}
