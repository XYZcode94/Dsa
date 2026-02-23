// Frequency of each element
#include <stdio.h>
#include <stdbool.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {0,1,0,1,2,0,1,2,1,1,56,2};
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

    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
        } else {
            printf("%d -> %d times\n", arr[i], count);
            count = 1;
        }
    }


    printf("\n");
    return 0;
}