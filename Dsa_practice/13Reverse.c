// Reverse array in-place

#include <stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {4,5,6,7,8,9,10,11,12,13,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    printArray(arr, n);



    return 0;
}