#include <stdio.h>

int main()
{
    int n, i, j, element;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    while (i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}