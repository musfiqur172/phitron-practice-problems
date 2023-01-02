#include <stdio.h>

void printNtoOne(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    printNtoOne(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printNtoOne(n);
    return 0;
}