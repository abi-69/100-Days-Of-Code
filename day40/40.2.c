#include <stdio.h>

/* Q80: Multiply two matrices. */
int main(void) {
    int rows_a, columns_a, rows_b, columns_b;
    int first[50][50], second[50][50];

    scanf("%d %d", &rows_a, &columns_a);
    for (int row = 0; row < rows_a; row++) {
        for (int column = 0; column < columns_a; column++) {
            scanf("%d", &first[row][column]);
        }
    }

    scanf("%d %d", &rows_b, &columns_b);
    for (int row = 0; row < rows_b; row++) {
        for (int column = 0; column < columns_b; column++) {
            scanf("%d", &second[row][column]);
        }
    }

    if (columns_a != rows_b) {
        puts("Invalid multiplication");
        return 0;
    }

    for (int row = 0; row < rows_a; row++) {
        for (int column = 0; column < columns_b; column++) {
            int sum = 0;
            for (int index = 0; index < columns_a; index++) {
                sum += first[row][index] * second[index][column];
            }
            printf("%d%c", sum, column == columns_b - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
