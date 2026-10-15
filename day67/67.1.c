#include <stdio.h>

/* Q117: Merge two sorted arrays. */
int main(void) {
    int m, n, first[1000], second[1000], i = 0, j = 0;
    scanf("%d", &m); for (int k = 0; k < m; k++) scanf("%d", &first[k]);
    scanf("%d", &n); for (int k = 0; k < n; k++) scanf("%d", &second[k]);
    while (i < m || j < n) {
        if (j == n || (i < m && first[i] <= second[j])) printf("%d ", first[i++]);
        else printf("%d ", second[j++]);
    }
    putchar('\n');
    return 0;
}
