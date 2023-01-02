#include <stdio.h>
#include <string.h>

int is_power_of_two(int n)
{
    if (n == 0)
        return 0;

    while (n != 1)
    {
        n = n / 2;
        if (n % 2 != 0 && n != 1)
        {
            return 0;
        }
    }
}

int power_of_two(int n)
{
    int count = 0;
    while (n != 1)
    {
        n /= 2;
        count++;
    }

    return count;
}

int main()
{
    char str[100];
    scanf(" %[^\n]", str);

    int i, cost = 0;
    for (i = 0; i < strlen(str); i++)
    {
        cost += str[i] - 96;
    }

    if (is_power_of_two(cost))
    {
        printf("YES\n");
        printf("cost = 2^%d", power_of_two(cost));
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}