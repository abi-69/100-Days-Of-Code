#include <stdio.h>

/* Q110: Print the maximum element in every window of size k. */
int main(void) {
    int n, k, values[1000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    for (int start = 0; start <= n - k; start++) {
        int maximum = values[start];
        for (int i = start + 1; i < start + k; i++) if (values[i] > maximum) maximum = values[i];
        printf("%d%c", maximum, start == n - k ? '\n' : ' ');
    }
    return 0;
}
