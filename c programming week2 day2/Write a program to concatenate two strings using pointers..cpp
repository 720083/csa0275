#include <stdio.h>

// Function to concatenate two strings using pointers
void concatenateStrings(char *str1, char *str2) {
    // Move the pointer of str1 to the end of the first string
    while (*str1) {
        str1++;
    }

    // Copy characters from str2 to the end of str1
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Add null terminator at the end of the concatenated string
    *str1 = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the strings
    concatenateStrings(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
