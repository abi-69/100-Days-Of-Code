#include <stdio.h>

/* Q145: Return the top student's details from a function. */
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

struct Student top_student(struct Student students[], int count) {
    struct Student best = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > best.marks) best = students[i];
    }
    return best;
}

int main(void) {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        scanf("%99s %d %f", students[i].name, &students[i].roll_number,
              &students[i].marks);
    }
    struct Student best = top_student(students, 5);
    printf("%s %d %.2f\n", best.name, best.roll_number, best.marks);
    return 0;
}
