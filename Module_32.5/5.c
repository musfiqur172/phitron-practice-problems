#include <stdio.h>

int nsum(int n)
{
    if (n == 1)
        return 1;
    return n + nsum(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", nsum(n));
    return 0;
}