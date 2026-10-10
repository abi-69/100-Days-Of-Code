#include <stdio.h>

/* Q112: Find the maximum contiguous subarray sum using Kadane's algorithm. */
int main(void) {
    int n, value;
    scanf("%d", &n);
    scanf("%d", &value);
    int best = value;
    int current = value;
    for (int i = 1; i < n; i++) {
        scanf("%d", &value);
        current = current > 0 ? current + value : value;
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}
