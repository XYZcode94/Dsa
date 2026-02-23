// Palindromic array check. 
// Palindrome => 12344321

#include <stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main () {
    int arr[] = {6,5,4,3,8,2,7,2,8,3,4,5,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int palindrome = 1;
    int s = 0;
    int e = n -1;
    while(s < e) {
        if (arr[s] != arr[e]){
            palindrome = 0;
            break;
        }
        s++;
        e--;
    }

    printArray(arr, n);
    if(palindrome == 1){
        printf("Given array is a PALINDROME!\n");
    }else{
        printf("Given array is NOT a palindrome!\n");
    }

}

