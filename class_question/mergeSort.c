#include <stdio.h>

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int *arr, int l, int mid, int r) {
    int tempArrSize = r - l + 1;
    int *tempArr = (int *)malloc(tempArrSize * sizeof(int));
    int k = 0;
    int i = l;
    int j = mid + 1;
    while (i <= mid && j <= r) {
        tempArr[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= mid) {
        tempArr[k++] = arr[i++];
    }
    while (j <= r) {
        tempArr[k++] = arr[j++];
    }
    for (int m = 0; m < tempArrSize; m++) {
        arr[l + m] = tempArr[m];
    }
}

void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {8, 5, 9, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before Sorting...\n");
    printArr(arr, n);
    
    mergeSort(arr, 0, n - 1);
    
    printf("After Sorting...\n");
    printArr(arr, n);

    return 0;
}