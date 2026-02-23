// Second largest and second smallest
#include <stdio.h>
#include <stdbool.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {5,4,0,8,3,9,1,0,19,8,23,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    for (int i = n - 1; i > 0; i--) {
        bool swaped = false;
        for (int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaped = true;
            }
        }
        if (!swaped) {
            break;
        }
    }
    printArray(arr, n);

    int smallest = arr[0];
    int largest = arr[n - 1];

    int secondSmallest, secondLargest;

    // Find second smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    // Find second largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            secondLargest = arr[i];
            break;
        }
    }

    printf("Second smallest: %d\n", secondSmallest);
    printf("Second largest: %d\n", secondLargest);



    printf("\n");
    return 0;
}