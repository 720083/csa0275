#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix among an array of strings
char* longestCommonPrefix(char** strs, int strsSize) {
    // If the array is empty, return an empty string
    if (strsSize == 0) {
        return "";
    }

    // Initialize the longest common prefix as the first string
    char* prefix = strs[0];
    int prefixLen = strlen(prefix);

    // Iterate through the remaining strings
    for (int i = 1; i < strsSize; i++) {
        // Compare characters of the current string with the prefix
        int j = 0;
        while (strs[i][j] && prefix[j] && strs[i][j] == prefix[j]) {
            j++;
        }
        // Update the prefix length to the common length
        prefixLen = j;
        // Null-terminate the prefix at the common length
        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    // Find the longest common prefix
    char* prefix = longestCommonPrefix(strs, strsSize);

    // Print the longest common prefix
    printf("Longest common prefix: %s\n", prefix);

    return 0;
}
