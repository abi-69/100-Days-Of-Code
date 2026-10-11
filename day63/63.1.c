#include <stdio.h>

/* Q113: Find the kth smallest element in an array. */
int main(void) {
    int n, k, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    scanf("%d", &k);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[j] < values[i]) { int t = values[i]; values[i] = values[j]; values[j] = t; }
        }
    }
    printf("%d\n", k >= 1 && k <= n ? values[k - 1] : -1);
    return 0;
}
