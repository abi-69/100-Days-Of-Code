#include <stdio.h>

/* Q105: Print the majority element, if one exists. */
int main(void) {
    int n, candidate = 0, count = 0, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        if (count == 0) candidate = values[i];
        count += values[i] == candidate ? 1 : -1;
    }
    count = 0;
    for (int i = 0; i < n; i++) if (values[i] == candidate) count++;
    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
