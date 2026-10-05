#include <stdio.h>

/* Q107: Print the previous greater element for every array element. */
int main(void) {
    int n, values[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &values[i]);
    for (int i = 0; i < n; i++) {
        int answer = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (values[j] > values[i]) { answer = values[j]; break; }
        }
        printf("%d%c", answer, i == n - 1 ? '\n' : ',');
    }
    return 0;
}
