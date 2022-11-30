#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int ara[10];
    int i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", (ara + i));
    }

    int *ptr = ara;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}