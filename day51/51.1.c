#include <stdio.h>

/* Q101: Print the first and last occurrence of a target in a sorted array. */
int main(void) {
    int n, target, first = -1, last = -1;
    int values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (values[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d %d\n", first, last);
    return 0;
}
