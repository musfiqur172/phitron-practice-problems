#include <stdio.h>
#include <string.h>

void even_up(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] % 2 == 0)
            str[i] -= 32;
    }
}

int main()
{
    char str[100];
    scanf(" %[^\n]", str);
    even_up(str);
    printf("%s\n", str);
    return 0;
}