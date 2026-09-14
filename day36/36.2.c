```c
#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int sum = 0;

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
```
