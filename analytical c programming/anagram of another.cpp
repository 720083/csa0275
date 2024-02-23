#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they cannot be anagrams
    if (len1 != len2)
        return 0;

    int count[256] = {0}; // Assuming ASCII characters

    // Count frequency of characters in str1
    for (int i = 0; i < len1; i++)
        count[(int)str1[i]]++;

    // Subtract frequency of characters in str2
    // If any count becomes negative, they are not anagrams
    for (int i = 0; i < len2; i++) {
        count[(int)str2[i]]--;
        if (count[(int)str2[i]] < 0)
            return 0;
    }

    // If all counts are 0, they are anagrams
    return 1;
}

int main() {
    const char *str1 = "listen";
    const char *str2 = "silent";

    if (areAnagrams(str1, str2))
        printf("%s and %s are anagrams.\n", str1, str2);
    else
        printf("%s and %s are not anagrams.\n", str1, str2);

    return 0;
}
