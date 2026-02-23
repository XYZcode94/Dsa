// Right rotation by k positions

#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main (){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,12,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nums[n];
    int k = 3;
    for (int i =  0; i < n; i++) {
        nums[(i+k) % n] = arr[i];
    }
    printArray(arr, n);
    printArray(nums, n);



}