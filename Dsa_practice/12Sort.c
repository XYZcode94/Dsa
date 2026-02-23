// Half ascending, half descending

#include <stdio.h>
#include <stdbool.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {8,2,-7,06,4,9,0,20,3,1};
    int n = sizeof(nums) / sizeof(nums[0]);
    printArray(nums, n);
    int mid = (n - 1) / 2;
    for (int i = mid; i > 0; i--) {
        bool swaped = false;
        for (int j = 0; j <= i - 1; j++) {
            if(nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swaped = true;
            }
        }
        if (!swaped) {
            break;
        }
    }
    printArray(nums, n);
    
    for (int i = n - 1; i > mid + 1; i--) {
        bool swaped = false;
        for (int j = mid + 1; j <= i - 1; j++) {
            if(nums[j] < nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swaped = true;
            }
        }
        if (!swaped) {
            break;
        }
    }
    printArray(nums, n);
    



    printf("\n");
    return 0;
}