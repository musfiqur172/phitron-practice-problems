#include <stdio.h>

int bubble_sort(int ara[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }
}

int k_smallest(int ara[], int k)
{
    return ara[k - 1];
}

int k_largest(int ara[], int size, int k)
{
    return ara[size - k];
}

int main()
{

    int ara[100];
    int n, i, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &k);

    bubble_sort(ara, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    printf("\n");
    printf("%dth smallest number %d\n", k, k_smallest(ara, k));
    printf("%dth largest number %d", k, k_largest(ara, n, k));

    return 0;
}