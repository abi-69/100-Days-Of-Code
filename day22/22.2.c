#include <stdio.h>

int main()
{
    int n, i;
    double sum = 1.0;
    int numerator = 3;
    int denominator = 4;

    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (double)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}