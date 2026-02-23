
// 5. Calculator............

#include <stdio.h>

int main()
{

    double num1, num2, result;
    char operator;
    scanf("%lf%c%lf", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        break;
    }

    printf("%g", result);

    printf("\n\n");
    return 0;
}