#include <stdio.h>

/* Q141: Read and print one student's data. */
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

int main(void) {
    struct Student student;
    scanf("%99s %d %f", student.name, &student.roll_number, &student.marks);
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n",
           student.name, student.roll_number, student.marks);
    return 0;
}
