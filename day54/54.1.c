#include <stdio.h>

/* Q104: Find the pivot integer between 1 and n. */
int main(void) {
    long long n, total, left = 0;
    scanf("%lld", &n);
    total = n * (n + 1) / 2;
    for (long long x = 1; x <= n; x++) {
        left += x;
        if (left == total - x + 1) { printf("%lld\n", x); return 0; }
    }
    puts("-1");
    return 0;
}
