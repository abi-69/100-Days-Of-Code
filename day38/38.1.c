#include <stdio.h>

/* Q75: Add two matrices. Input: rows, columns, then both matrices. */
int main(void) {
    int r, c, a[100][100], b[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d%c", a[i][j] + b[i][j], j == c - 1 ? '\n' : ' ');
    }
    return 0;
}
