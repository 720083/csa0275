// C program to check a given number appears more than N/2 times
// in a sorted array of N integers

#include <stdio.h>

int main()
{

    int arr[] = { 20, 25, 25, 25, 25, 42, 67 };
    int item = 25;
    int loop = 0;
    int count = 0;
    int size = 0;

    size = sizeof(arr) / sizeof(arr[0]);

    for (loop = 0; loop < size; loop++) {
        if (item == arr[loop])
            count = count + 1;
    }

    if (count > (size / 2))
        printf("The number %d appears more than %d times in arr[]\n", item, size / 2);
    else
        printf("The number %d does not appear more than %d times in arr[]\n", item, size / 2);

    return 0;
}
