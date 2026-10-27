#include <stdio.h>

/* Q129: Sum and average integers from numbers.txt. */
int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    int value, count = 0;
    long long sum = 0;
    if (file == NULL) { puts("Could not open file"); return 1; }
    while (fscanf(file, "%d", &value) == 1) { sum += value; count++; }
    fclose(file);
    printf("Sum: %lld\nAverage: %.2f\n", sum, count ? (double)sum / count : 0.0);
    return 0;
}
