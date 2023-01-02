#include <stdio.h>

int dsum(int arr[], int n)
{
    if (n == 0)
        return 0;
    int sum = dsum(arr + 1, n - 1);
    return sum + arr[0] % 10;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", dsum(arr, n));
}