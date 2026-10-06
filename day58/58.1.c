#include <stdio.h>

/* Q108: Print the product of all elements except the current element. */
int main(void) {
    int n, values[1000];
    long long prefix = 1, answer[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    for (int i = 0; i < n; i++) { answer[i] = prefix; prefix *= values[i]; }
    prefix = 1;
    for (int i = n - 1; i >= 0; i--) { answer[i] *= prefix; prefix *= values[i]; }
    for (int i = 0; i < n; i++) printf("%lld%c", answer[i], i == n - 1 ? '\n' : ' ');
    return 0;
}
