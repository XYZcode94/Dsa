
// Run:  gcc 1armstrongNumber.c -o 1armstrongNumber -lm && ./1armstrongNumber
// 1. Armstrong number ............
#include<stdio.h>
#include <math.h>

int digit(int a) {
    if (a == 0)
        return 1;

    int countDigit = 0;
    while (a > 0) {
        countDigit++;
        a /= 10;
    }
    return countDigit;
}

int checkArmstrong(int num, int digitCount) {
    int sum = 0;
    int number = num;

    if (num == 0) {
        sum = 0;  // 0^1
    } else {
        while (num > 0) {
            int digit = num % 10;
            int toAdd = (int)(pow(digit, digitCount) + 1e-9);
            sum += toAdd;
            printf("Number: %d  ||  Digit: %d  ||  Digit Count: %d  ||  To Add: %d  ||  sum: %d \n", number, digit, digitCount, toAdd, sum);
            num /= 10;
        }
    }

    return sum == number;
}


int main () {
    int num = 153;
    int digitCount = digit(num);
    int armstrong = checkArmstrong(num, digitCount);
    if (armstrong) {
        printf("\n\t%d is an Armstrong number\n\n", num);
    } else {
        printf("\n\t%d is not an Armstrong number\n\n", num);
    }


    return 0;
}