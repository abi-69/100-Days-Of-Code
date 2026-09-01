#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0;
    int numerator = 2;
    int denominator = 3;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}