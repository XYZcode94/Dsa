
//  Linear search with malloc
//  write a program in c to find a key element from an array of in elements.
// * Dynamically allocation  memory for each using malloc()
// * Input the Array size and element from user
// * Properly free() the allocated memory

#include<stdio.h>
#include<stdlib.h>

// Linear search function


int linearSearch(int key, int array[100], int n) {

    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main(){
    int n, key;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the key: ");
    scanf("%d",&key);
    int result = linearSearch(key,array,n);
    printf("key found: %d\n",result);
    
}

int reverse (){

}

