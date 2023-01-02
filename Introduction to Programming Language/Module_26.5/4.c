#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double area(int radius)
{
    return 3.14159 * pow(radius, 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Area: %lf sq units", area(n));
    return 0;
}