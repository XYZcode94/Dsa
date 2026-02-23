// Two sorted arrays A and B
// n = 3,m = 4,
// A = {1, 3, 15}, B = {2, 9, 18, 26}.
// A = {1, 2, 3}, B = {9, 15, 18, 26}.

#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void main()
{
    int A[] = {0, 6, 7, 8, 9};
    int B[] = {1, 2, 3, 15};
    
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    printArray(A, n);
    printArray(B, m);

    for (int i = 0; i < n; i++)
    {
        if (A[i] > B[0])
        {
            int temp = A[i];
            A[i] = B[0];
            B[0] = temp;
            int j = 1;
            while (j < m && B[j] < temp)
            {
                B[j - 1] = B[j];
                j++;
            }
            B[j - 1] = temp;
        }
    }

    printArray(A, n);
    printArray(B, m);

    printf("\n");
}