#include <stdio.h>

// Function to count the number of subarrays with sum less than a given value
int countSubarraysWithSumLessThanK(int arr[], int n, int k) {
    int count = 0, sum = 0, i = 0;

    while (i < n) {
        sum += arr[i];

        // If the current sum is less than k, increment count
        if (sum < k)
            count++;

        // If the current sum becomes greater than or equal to k,
        // remove elements from the beginning until the sum is less than k
        while (sum >= k) {
            sum -= arr[i];
            i++;
            if (i < n)
                sum += arr[i];
            else
                break;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;
    int count = countSubarraysWithSumLessThanK(arr, n, k);
    printf("Number of subarrays with sum less than %d: %d\n", k, count);

    return 0;
}
