#include <stdio.h>
void writePrime(int arr[], int n) {
  int *q = arr, *qq = arr, i, prime;
  while (q < arr + n) {
    while (qq < arr + n) {
      i = 1;
      if (*qq % i != 0)
        continue;
      else
        prime = 1;
      i++;
      qq++;
    }
    if (prime == 1)
      printf("%d ", *q);
    q++;
  }
}
int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 92, 93, 94, 95, 96};
  int n = sizeof(arr) / sizeof(*arr);
  writePrime(arr, n);
  return 0;
}