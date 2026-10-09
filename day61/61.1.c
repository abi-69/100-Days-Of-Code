#include <stdio.h>

/* Q111: Print the first negative number in every window of size k. */
int main(void) {
    int n, k, values[1000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    for (int start = 0; start <= n - k; start++) {
        int answer = 0;
        for (int i = start; i < start + k; i++) if (values[i] < 0) { answer = values[i]; break; }
        printf("%d%c", answer, start == n - k ? '\n' : ' ');
    }
    return 0;
}
