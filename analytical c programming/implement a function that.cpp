#include <stdio.h>

double findMedianSortedArrays(int arr1[], int arr2[], int n) {
    int merged[2 * n];
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < n)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    if (2 * n % 2 == 0) {
        return (merged[n - 1] + merged[n]) / 2.0;
    } else {
        return merged[n];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    double median = findMedianSortedArrays(arr1, arr2, n);
    printf("Median of the two sorted arrays is: %lf\n", median);

    return 0;
}
