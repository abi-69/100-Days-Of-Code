#include <stdio.h>

int main()
{
    int n, m, i;
    int arr1[100], arr2[100], arr3[200];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
        arr3[n + i] = arr2[i];
    }

    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}