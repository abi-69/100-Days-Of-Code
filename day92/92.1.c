#include <stdio.h>

/* Q142: Store and print five student records. */
struct Student {
    char name[100];
    int roll_number;
    float marks;
};

int main(void) {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        scanf("%99s %d %f", students[i].name, &students[i].roll_number,
              &students[i].marks);
    }
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].roll_number,
               students[i].marks);
    }
    return 0;
}
