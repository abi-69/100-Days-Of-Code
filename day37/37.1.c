#include <stdio.h>

/* Q73: Find the sum of each row of a matrix and store it in an array. */
int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100], row_sums[100];
    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        if (i > 0) printf(" ");
        printf("%d", row_sums[i]);
    }
    printf("\n");
    return 0;
}
