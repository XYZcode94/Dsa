// Elements greater than average

#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{

    int arr[] = {5, 4, 0, 8, 3, 9, 1, 0, 19, 8, 23, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int average = 0;

    for (int i = 0; i < n; i++)
    {
        average += arr[i];
    }
    average = average / n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > average)
        {
            count++;
        }
    }
    printArray(arr, n);
    printf("Average of the array: %d\n", average);
    printf("Total %d elements greater than average present in the array", count);


    printf("\n");
}