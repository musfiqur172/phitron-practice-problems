#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n = 5, i, j;
    int k = 1, l = (n * 2) - 2;
    // scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = l; j >= 1; j--)
        {
            printf(" ");
        }
        l = l - 2;
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k = k + 2;
    }

    return 0;
}