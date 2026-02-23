// Move all zeros to the end

#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main () {
    int arr[] = {3,44,0,2,0,6,0,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
      int index = 0;

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining with zeros
    while (index < n) {
        arr[index++] = 0;
    }

    printArray(arr,n);

}