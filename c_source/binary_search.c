#include<stdio.h>

static int arr[10] = {1, 24, 32, 98, 102, 213, 542, 982, 1923, 2222};

int binarySearch(int a[10], int key, int size)
{
    int low = 0;
    int high = size - 1;
    
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        
        if(key < a[mid])
        {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1; 
        }
        else
            return mid + 1;
    }
    
    return -1;
}

int main() {
    int size = sizeof(arr)/sizeof(arr[0]);
    int ret = binarySearch(arr, 2222, size);
    
    printf("%d", ret);
    
    return 0;
}
