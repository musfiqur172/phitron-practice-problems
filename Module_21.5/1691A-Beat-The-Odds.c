#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n, i, even, odd;
    int arr[100000];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        even = 0, odd = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr[i] % 2 ? odd++ : even++;
        }
        printf("%d\n", even < odd ? even : odd);
    }

    return 0;
}