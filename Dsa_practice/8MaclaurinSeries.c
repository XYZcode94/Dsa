#include <stdio.h>
#include <stdbool.h>
#include <math.h>
float powe(float a, int b)
{
    float product = 1;
    for (int i = 1; i <= b; i++)
    {
        product = product * a;
    }
    return product;
}
int fact(int a)
{
    int result = 1;
    while (a > 1)
    {
        result = result * a--;
    }
    return result;
}

float sine(float x)
{
    float sum = 0.0;
    float prev_term = 0.0;
    float curr_term;
    int n = 0;

    do
    {
        curr_term = powe(-1, n) * powe(x, 2 * n + 1) / fact(2 * n + 1);
        sum += curr_term;

        if (n > 0 && fabs(curr_term - prev_term) < 0.0001)
        {
            break;
        }
        printf("Current term: %f, Previous Term: %f\n",curr_term, prev_term);
        prev_term = curr_term;
        n++;

    } while (1);

    return sum;
}

int main()
{
    float x = 0.50;
    float maclaurinSeriesSum = sine(x);

    printf("sin(%.2f) = %.6f\n", x, maclaurinSeriesSum);
    printf("\n");
    return 0;
}