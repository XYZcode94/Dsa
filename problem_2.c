
// Linear search with malloc
//  write a program in c to find a key element from an array of in elements.
// * Dynamically allocation  memory for each using malloc()
// * Input the Array size and element from user
// * Properly free() the allocated memory

#include<stdio.h>
#include<stdlib.h>

// Linear search function
int linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main(){
    int n, key, position;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    
    int *arr = (int *)malloc(n * sizeof(int));
    
   
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    

    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    

    position = linearSearch(arr, n, key);
    

    if (position != -1) {
        printf("\nElement found at position: %d (0-indexed)\n", position);
        printf("Element found at position: %d (1-indexed)\n", position + 1);
    } else {
        printf("\nElement not found in the array!\n");
    }
    

    free(arr);
    arr = NULL;
    
    return 0;
}