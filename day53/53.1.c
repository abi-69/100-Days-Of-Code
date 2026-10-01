#include <stdio.h>

/* Q103: Find the leftmost pivot index of an array. */
int main(void) {
    int n, values[1000], total = 0, left = 0, answer = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { scanf("%d", &values[i]); total += values[i]; }
    for (int i = 0; i < n; i++) {
        if (left == total - left - values[i]) { answer = i; break; }
        left += values[i];
    }
    printf("%d\n", answer);
    return 0;
}
