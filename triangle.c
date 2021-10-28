#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l, n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*", k);
        }
        for (l = i - 1; l >= 1; l--)
        {
            printf("*", l);
        }
        printf("\n");
    }
    return 0;
}
