#include <stdio.h>

int main()
{
    int T, n, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            printf("1");
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                printf("%d ", i + 2);
            }
        }

        printf("\n");
    }

    return 0;
}