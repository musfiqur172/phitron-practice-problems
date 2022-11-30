#include <stdio.h>

int main()
{
    int x, y;
    int *p, *q;
    p = &x;
    q = &y;

    scanf("%d %d", p, q);
    printf("%d\n", *p + *q);

    return 0;
}