#include <stdio.h>

int countOccurrences(char *str, char ch) {
    int count = 0;

    while (*str != '\0') {
        
        if (*str == ch) {
            count++;
        }
        
        str++;
    }

    return count;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count its occurrences: ");
    scanf(" %c", &ch); 

    int occurrences = countOccurrences(str, ch);

    printf("Number of occurrences of '%c' in the string: %d\n", ch, occurrences);

    return 0;
}
