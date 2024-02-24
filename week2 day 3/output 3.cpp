#include <stdio.h>

// Function to find the majority element in an array
int findMajorityElement(int arr[], int n) {
    int count = 1, majorityElement = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] == majorityElement)
            count++;
        else {
            count--;
            if (count == 0) {
                majorityElement = arr[i];
                count = 1;
            }
        }
    }

    // Check if the majority element exists
    count = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == majorityElement)
            count++;

    if (count > n / 2)
        return majorityElement;
    else
        return -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement == -1)
        printf("No majority element exists\n");
    else
        printf("Majority Element: %d\n", majorityElement);

    return 0;
}
