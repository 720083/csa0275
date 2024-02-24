#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        while (arr[left] < 0) {
            left++;
        }

        while (arr[right] >= 0) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}

int main() {
    int arr[] = {-3, 2, -1, 5, 0, -4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rearrangeArray(arr, size);

    printf("Rearranged Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
