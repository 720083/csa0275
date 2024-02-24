#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to find the minimum window substring containing all characters of another string
char *minWindowSubstring(char str1[], char str2[]) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    // Create a count array to store the frequency of characters in str2
    int count[128] = {0};
    for (int i = 0; i < n2; i++)
        count[str2[i]]++;

    // Initialize variables for window start, end, and minimum length
    int start = 0, end = 0, minLen = n1 + 1;

    // Iterate through the given string and maintain a window
    while (end < n1) {
        // Check if the character is present in str2 and reduce the count if it is
        if (count[str1[end]] > 0)
            count[str1[end]]--;

        end++;

        // If all characters of str2 are present in the window, check if the window is smaller than the current minimum
        if (count[str1[end - 1]] == 0) {
            while (count[str1[start]] < count[str1[start]] - 1)
                count[str1[start++]]++;

            int len = end - start;
            if (len < minLen)
                minLen = len;
        }
    }

    // If no window with all characters of str2 is found, return NULL
    if (minLen == n1 + 1)
        return NULL;

    // Create a dynamic array to store the minimum window substring
    char *result = (char *)malloc((minLen + 1) * sizeof(char));
    if (!result) {
        printf("Memory error\n");
        exit(EXIT_FAILURE);
    }

    // Copy the minimum window substring to the result array
    int i = start;
    for (int j = 0; j < minLen; j++)
        result[j] = str1[i++];
    result[minLen] = '\0';

    return result;
}

int main() {
    char str1[] = "ADOBECODEBANC";
    char str2[] = "ABC";
    char *result = minWindowSubstring(str1, str2);

    if (result != NULL)
        printf("Minimum window substring: %s\n", result);
    else
        printf("No such window found\n");

    free(result);
    return 0;
}
