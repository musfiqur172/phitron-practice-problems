#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;

    printf("%d", *p + *q + *r);

    return 0;
}