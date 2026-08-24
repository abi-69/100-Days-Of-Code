#include <stdio.h>

int main()
{
    int n, i;
    int product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}ls -lh day14