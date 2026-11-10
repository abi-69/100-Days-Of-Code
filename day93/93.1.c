#include <stdio.h>

/* Q143: Find and print the student with the highest marks. */
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

int main(void) {
    struct Student best, current;
    scanf("%99s %d %f", best.name, &best.roll_number, &best.marks);
    for (int i = 1; i < 5; i++) {
        scanf("%99s %d %f", current.name, &current.roll_number, &current.marks);
        if (current.marks > best.marks) best = current;
    }
    printf("%s %d %.2f\n", best.name, best.roll_number, best.marks);
    return 0;
}
