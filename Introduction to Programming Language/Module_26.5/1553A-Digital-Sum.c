#include <stdio.h>

int main()
{
    int t, n, count;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        count = n / 10;
        if (n % 10 == 9)
            count += 1;
        printf("%d\n", count);
    }

    return 0;
}