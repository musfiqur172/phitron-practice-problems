#include <stdio.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int ara[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ara[j] > ara[j + 1])
                swap(&ara[j], &ara[j + 1]);
        }
    }
}

int main()
{
    int ara[100];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    bubble_sort(ara, 5);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}