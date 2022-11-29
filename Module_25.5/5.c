#include <stdio.h>

int sum_of_n(int n)
{
    if (n == 1)
        return 1;
    return n + sum_of_n(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum_of_n(n));
    return 0;
}