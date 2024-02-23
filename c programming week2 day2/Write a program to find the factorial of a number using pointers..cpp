#include <stdio.h>
#include <stdlib.h>

int fact(int *num, int *n)
{
    long long unsigned int fact = 1;
    for ((*n) = 1; (*n) <= (*num); (*n)++)
    {
        fact = fact * (*n);
    }
    return fact;
}

int main()
{
    int num, n;
    long long unsigned int b;
    printf("Write the number to take factorial \n");
    scanf("%d", &num);
    b = fact( &num, &n);
    printf("Factorial = %llu", b);
    return 0;
}