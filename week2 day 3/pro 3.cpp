double findMedianSortedArrays(int arr1[], int arr2[], int n1, int n2, double *res) {
    int totalSize = n1 + n2;
    int mid = totalSize / 2;

    int *mergedArray = (int*)malloc(totalSize * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            mergedArray[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            mergedArray[k++] = arr2[j++];
        else {
            mergedArray[k++] = arr1[i++];
            j++;
        }
    }

    while (i < n1)
        mergedArray[k++] = arr1[i++];

    while (j < n2)
        mergedArray[k++] = arr2[j++];

    if (totalSize % 2 == 1)
        *res = (double)mergedArray[mid];
    else
        *res = (double)((mergedArray[mid - 1] + mergedArray[mid]) / 2);

    free(mergedArray);
    return *res;
}
