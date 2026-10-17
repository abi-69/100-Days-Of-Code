#include <stdio.h>

/* Q119: Find the only repeated element in an array. */
int main(void) {
    int n, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++)
        if (values[i] == values[j]) { printf("%d\n", values[i]); return 0; }
    puts("-1");
    return 0;
}
