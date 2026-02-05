

#include <stdio.h>
#include <stdlib.h>

void arr_sort(int arr[], int n) ;


int main() {
    int arr[5] = {10, 30, 20, 40, 50};
    // int n = sizeof(arr) / sizeof(int);
    arr_sort(arr, 5);

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


void arr_sort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}