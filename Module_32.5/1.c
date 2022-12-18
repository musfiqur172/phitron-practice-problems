#include <stdio.h>

int power(int b, int p)
{

    if (p == 0)
        return 1;
    return b * power(b, p - 1);
}

int main()
{
    printf("%d\n", power(2, 5));
    return 0;
}