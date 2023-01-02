#include <stdio.h>

int main()
{

    int n, ara[100], i, k, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (ara[i] > k || ara[i] < k)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}