// Run:  gcc 4QuadraticEquation.c -o 4QuadraticEquation -lm && ./4QuadraticEquation
// Roots of a quadratic equation ..........

#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n\n");

    double a, b, c;
    printf("Enter the value of a (coefficients of x^2): ");
    scanf("%lf", &a);
    printf("Enter the value of b (coefficients of x): ");
    scanf("%lf", &b);
    printf("Enter the value of c (constant term): ");
    scanf("%lf", &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Infinite solutions\n");
            else
                printf("No solution\n");
        }
        else
        {
            double r1 = -c / b;
            printf("Root: %.5lf\n", r1);
        }
    }else
    {
        // D = sqroot of b^2 - 4ac
        double D = ((b * b) - (4 * a * c));
        printf("Value of D: %.5lf\n", D);
        if (D >= 0)
        {

            double r1 = ((-b + sqrt((double)D)) / (2 * a));
            double r2 = ((-b - sqrt((double)D)) / (2 * a));

            printf("Root1: %.5lf || Root2: %.5lf", r1, r2);
        }
        else
        {
            printf("Roots are imaginary");
        }
    }

    printf("\n\n");
    return 0;
}