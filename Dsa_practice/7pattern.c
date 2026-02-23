// 1A
// 12AB
// 123ABC
// 1234ABCD

#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", (j+1));
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", (j+'A'));
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}