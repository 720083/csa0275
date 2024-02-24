#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char** strings, int n) {
    if (n <= 0) {
        return "";
    }

    // Take the first string as the reference
    char* prefix = strings[0];
    int len = strlen(prefix);

    // Iterate through each character in the reference string
    for (int i = 0; i < len; ++i) {
        // Compare the current character with the corresponding character in other strings
        for (int j = 1; j < n; ++j) {
            if (prefix[i] != strings[j][i] || strings[j][i] == '\0') {
                // If a mismatch is found or the end of a string is reached, return the prefix
                prefix[i] = '\0';
                return prefix;
            }
        }
    }

    return prefix;
}

int main() {
    // Example usage
    char* array[] = {"flower", "flow", "flight"};
    int size = sizeof(array) / sizeof(array[0]);

    char* result = longestCommonPrefix(array, size);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}

