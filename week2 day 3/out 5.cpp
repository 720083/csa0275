#include <stdio.h>
#include <string.h>

// Function to count distinct substrings of a given string
int countDistinctSubstrings(char str[]) {
    int n = strlen(str);
    int count = 0;

    // Iterate through the string and consider each character as the starting point
    // of a substring
    for (int i = 0; i < n; i++) {
        // Iterate through the remaining characters to form substrings
        for (int len = 1; len <= n - i; len++) {
            char substring[len + 1];
            strncpy(substring, &str[i], len);
            substring[len] = '\0';

            // Check if the substring is already counted
            int isDistinct = 1;
            for (int j = 0; j < i; j++) {
                if (strcmp(substring, &str[j]) == 0) {
                    isDistinct = 0;
                    break;
                }
            }

            // If the substring is distinct, increment the count
            if (isDistinct)
                count++;
        }
    }

    return count;
}

int main() {
    char str[] = "abcd";
    int count = countDistinctSubstrings(str);
    printf("Number of distinct substrings: %d\n", count);

    return 0;
}
