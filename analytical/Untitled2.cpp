#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
// Function to find the maximum difference in an array
int maxDifference(int arr[], int n) {
    // Check if the array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return -1;   }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

  
    int maxDiff = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > maxDiff) {
            maxDiff = arr[i] - arr[i - 1];
        }
    }

    return maxDiff;
}

int main() {
    int arr[] = {7, 1, 9, 5, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxDifference(arr, n);

    if (result != -1) {
        printf("Maximum difference between any two elements: %d\n", result);
    }

    return 0;
}
