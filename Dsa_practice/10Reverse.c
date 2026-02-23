// Reverse an N -digit number
#include <stdio.h>

int powe(int a, int b)
{
    int product = 1;
    for (int i = 1; i <= b; i++)
    {
        product = product * a;
    }
    return product;
}

int main()
{
    int n = 8765;
    int original = n;
    int nReverse = 0;
    while (n > 0)
    {
        int digit = n % 10;
        nReverse = (nReverse * 10) + digit;
        n = n / 10;
    }
    printf("\nnReverse: %d\n", nReverse);

    // Method 2: Without %
    int temp = original;
    int digits = 0;
    int rev = 0;

    // Count digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = original;
    int pos = digits - 1;

    while (temp > 0)
    {
        int power = powe(10, pos);
        int digit = temp / power;

        rev = rev + digit * powe(10, digits - pos - 1);

        temp = temp - digit * power;
        pos--;
    }

    printf("Reverse without modulo = %d\n", rev);

    printf("\n");

    return 0;
}