#include <stdio.h>

/* Q102: Find the index of the first element greater than or equal to x. */
int main(void) {
    int n, x, answer = -1, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (values[i] >= x) { answer = i; break; }
    }
    printf("%d\n", answer);
    return 0;
}
