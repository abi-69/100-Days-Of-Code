#include <stdio.h>

/* Q116: Find two indices whose values add to the target. */
int main(void) {
    int n, target, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    scanf("%d", &target);
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++)
        if (values[i] + values[j] == target) { printf("%d %d\n", i, j); return 0; }
    puts("-1 -1");
    return 0;
}
