
// Question: write a c program to calculate the sum of all elements in array that greater than the array average.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average, greaterSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    for (i = 0; i < n; i++) {
        if (arr[i] > average) {
            greaterSum += arr[i];
        }
    }

    printf("Average of the array = %f\n", average);
    printf("Sum of elements greater than the average = %f\n", greaterSum);

    return 0;
}
