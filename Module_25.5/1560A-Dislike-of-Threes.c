#include <stdio.h>

int main()
{
    int T, n, count, num, res;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);
        num = 1;
        count = 0;
        int res;
        while (count != n)
        {

            if (num % 3 != 0 && num % 10 != 3)
            {
                res = num;
                count++;
            }
            num++;
        }

        printf("%d\n", num - 1);
    }
    return 0;
}