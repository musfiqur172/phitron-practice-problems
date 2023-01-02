#include <stdio.h>

int is_last_digit_zero(int n)
{
    if (n % 10 == 0)
        return 1;
    return 0;
}

int sum_of_elements(int ara[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_last_digit_zero(*(ara + i)))
            sum += *(ara + i);
    }

    return sum;
}

int main()
{
    int ara[10], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("%d\n", sum_of_elements(ara, n));

    return 0;
}