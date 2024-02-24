#include <stdio.h>
#include <stdlib.h>

int findMajorityElement(int arr[], int n) {
    int count = 1, leader = arr[0], maxCount = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] == leader)
            count++;
        else {
            count--;

            if (count < 0) {
                leader = arr[i];
                count = 1;
            }
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == leader)
            count++;
    }

    if (count > n / 2)
        return leader;
    else
        return -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1)
        printf("The element that appears more than %d/2 times is: %d", n, majorityElement);
    else
        printf("No element appears more than %d/2 times.", n);

    return 0;
}
