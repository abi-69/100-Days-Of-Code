#include <stdio.h>

int main()
{
    int n, remainder;
    int binary = 0;
    int place = 1;

    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}