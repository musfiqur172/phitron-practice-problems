#include <stdio.h>
#include <stdlib.h>

// int *func()
// {
//     // int n = 5;
//     static int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         a[i] = 1;
//     }
//     // int *p = &a[0];
//     return a;
// }

int *func(int n)
{
    int *a = malloc(sizeof(n));
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    return a;
}

int main()
{

    int n = 5, i;
    int *ptr;
    ptr = func(n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}