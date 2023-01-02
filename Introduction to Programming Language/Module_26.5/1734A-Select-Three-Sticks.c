#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int ara[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                swap(&ara[j], &ara[j + 1]);
            }
        }
    }
}

int min(int x, int y, int z)
{
    if ((x < y) && (x < z))
    {
        return x;
    }
    else if ((y < x) && (y < z))
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int ara[300];
    int t, n, i, ans1, ans2, ans = 0, x, y, z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        bubble_sort(ara, n);
        ans = pow(10, 9);
        for (i = 0; i < n - 2; i++)
        {
            // printf("%d ", ara[i]);
            x = ara[i];
            y = ara[i + 1];
            z = ara[i + 2];

            ans1 = abs(x - y) + abs(x - z);
            ans2 = abs(y - x) + abs(y - z);

            ans = min(ans, ans1, ans2);
        }
        printf("%d\n", ans);
    }

    return 0;
}