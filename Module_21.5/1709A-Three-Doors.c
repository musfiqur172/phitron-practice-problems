#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, x, d[4], ans = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &x, &d[1], &d[2], &d[3]);
        ans = 1;

        for (int i = 1; i <= 2; i++)
        {
            if (d[x] == 0)
            {
                ans = 0;
                break;
            }
            x = d[x];
        }
        printf("%s\n", ans ? "YES" : "NO");
    }

    return 0;
}