#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int count = 1, majorityElement = arr[0], index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[index]) {
            count++;
        }
        else {
            count--;
            if (count == 0) {
                index = i;
                majorityElement = arr[i];
                count = 1;
            }
        }
    }

    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == majorityElement) {
            count++;
        }
    }

    if (count > size / 2) {
        return majorityElement;
    }
    else {
        return -1;
    }
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, size);

    if (majorityElement == -1) {
        printf("No majority element exists.\n");
    }
    else {
        printf("Majority Element: %d\n", majorityElement);
    }

    return 0;
}
