#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

       
        if (arr[mid] == target) {
            
            while (mid > 0 && arr[mid - 1] == target) {
                mid--;
            }
            return mid;
        }

       
        if (arr[mid] < target)
            low = mid + 1;

       
        else
            high = mid - 1;
    }

   
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        printf("First occurrence of %d is at index %d\n", target, result);
    else
        printf("%d not found in the array\n", target);

    return 0;
}

