#include <stdio.h>

int main()
{
    float x, y;
    float *p, *q;
    p = &x;
    q = &y;

    scanf("%f %f", p, q);
    printf("%0.3f\n", (*p + *q) / 2.0);

    return 0;
}