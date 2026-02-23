// 10 3 40 20 50 80 70

#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);

    int key = 70;

    // find key by binarySearch
    int s = 0, e = (n - 1);
    int mid = s + ((e - s) / 2);
    int keyIndex = -1;

    while (s <= e)
    {
        mid = s + ((e - s) / 2);
        printf("%d %d\n", mid, arr[mid]);

        // if key found at n or n-1 or n+1
        if (key == arr[mid])
        {
            keyIndex = mid;
            break;
        }
        // for n-1
        if (mid > 0 && arr[mid - 1] == key)
        {
            keyIndex = mid - 1;
            break;
        }
        // for n+1
        if (mid < (n - 1) && arr[mid + 1] == key)
        {
            keyIndex = mid + 1;
            break;
        }

        if (arr[mid] > key)
            e = mid - 2;
        else
            s = mid + 2;
    }

    if (keyIndex != -1)
    {
        printf("%d found at index %d\n", key, keyIndex);
    }
    else
    {
        printf("%d not found\n", key);
    }





    // Sort
    printf("Sorted Array => ");

    int i = 0;
    while(i < (n - 1)) {
        if (arr[i] > arr[i+1]) {
            // swap 
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        i++;
    }

    printArr(arr, n);

    return 0;
}