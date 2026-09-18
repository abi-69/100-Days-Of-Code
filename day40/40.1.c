#include <stdio.h>

/* Q79: Perform diagonal traversal of a matrix. */
int main(void) {
    int rows, columns;
    int matrix[100][100];

    scanf("%d %d", &rows, &columns);
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &matrix[row][column]);
        }
    }

    int first_value = 1;
    for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++) {
        int first_row = diagonal < columns ? 0 : diagonal - columns + 1;
        int last_row = diagonal < rows ? diagonal : rows - 1;

        for (int row = first_row; row <= last_row; row++) {
            if (!first_value) {
                putchar(' ');
            }
            printf("%d", matrix[row][diagonal - row]);
            first_value = 0;
        }
    }
    putchar('\n');
    return 0;
}
