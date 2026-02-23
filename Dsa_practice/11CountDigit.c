#include <stdio.h>

int main()
{
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    int power = 1;

    while (n >= power)
    {
        count++;
        power = power * 10;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
