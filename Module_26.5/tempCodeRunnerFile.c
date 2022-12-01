
#include <stdio.h>

int *func()
{
    int ara[10];
    int i;

    for (i = 0; i < 5; ++i)
    {
        ara[i] = i + 1;
    }

    return ara;
}

int main()
{
    int n = 5;
    int *ptr = func();
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}