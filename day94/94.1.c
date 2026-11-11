#include <stdio.h>

/* Q144: Pass a structure to a function and print its members. */
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

void print_student(struct Student student) {
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n",
           student.name, student.roll_number, student.marks);
}

int main(void) {
    struct Student student;
    scanf("%99s %d %f", student.name, &student.roll_number, &student.marks);
    print_student(student);
    return 0;
}
