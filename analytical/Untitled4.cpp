#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findCommonElements(int arr1[], int arr2[], int n1, int n2) {
    int i, j;
    int commonSize = 0;
    int *commonArr = (int *)malloc(sizeof(int) * n1);

    for (i = 0; i < n1; i++) {
        int found = 1;

        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                commonArr[commonSize++] = arr1[i];
                found = 0;
                break;
            }
        }

        if (found) {
            commonArr[commonSize++] = arr1[i];
        }
    }

    printf("The common elements are: ");
    for (i = 0; i < commonSize; i++) {
        printf("%d ", commonArr[i]);
    }
    printf("\n");

    free(commonArr);
}

int main() {
    int arr1[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int arr2[] = {22, 15, 33, 70, 41, 60, 80, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findCommonElements(arr1, arr2, n1, n2);

    return 0;
}
