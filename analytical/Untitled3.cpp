#include <stdio.h>

unsigned long long int factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    unsigned int num = 5;
    unsigned long long int result = factorial(num);

    printf("Factorial of %u is %llu\n", num, result);

    return 0;
}
