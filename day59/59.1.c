#include <stdio.h>

/* Q109: Find the maximum sum of a subarray of size k. */
int main(void) {
    int n, k, values[1000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    int sum = 0;
    for (int i = 0; i < k; i++) sum += values[i];
    int best = sum;
    for (int i = k; i < n; i++) {
        sum += values[i] - values[i - k];
        if (sum > best) best = sum;
    }
    printf("%d\n", best);
    return 0;
}
