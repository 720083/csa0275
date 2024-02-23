
#include <stdbool.h>
#include <stdio.h>

int firstMissingPos(int A[], int n)
{

	bool present[n + 1];
	for (int i = 0; i < n; i++)
		present[i] = false;

	for (int i = 0; i < n; i++) {

	
		if (A[i] > 0 && A[i] <= n)
			present[A[i]] = true;
	}

	for (int i = 1; i <= n; i++)
		if (!present[i])
			return i;

	
	return n + 1;
}


int main()
{

	int arr[] = { 0, 10, 2, -10, -20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d", firstMissingPos(arr, size));
}

