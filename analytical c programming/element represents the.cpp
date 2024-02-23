#include <stdio.h>
#include <limits.h>

// Function to find the minimum number of jumps needed to reach the end of an array
int minJumps(int arr[], int n) {
    if (n <= 1)
        return 0; // No jumps needed if the array has 0 or 1 element

    int maxReach = arr[0]; // Maximum index that can be reached
    int steps = arr[0];    // Maximum steps that can be taken from the current position
    int jumps = 1;         // Number of jumps needed

    for (int i = 1; i < n; i++) {
        // If current index exceeds the maximum reach
        if (i > maxReach)
            return -1; // Not possible to reach the end

        // If the end is reachable from the current position
        if (i == n - 1)
            return jumps;

        // Update the maximum reach if needed
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;

        // Reduce steps as we move forward
        steps--;

        // If steps become 0, take a jump
        if (steps == 0) {
            jumps++;
            // If no further jump is possible
            if (i >= maxReach)
                return -1; // Not possible to reach the end
            steps = maxReach - i; // Set steps for the next jump
        }
    }

    return -1; // Not possible to reach the end
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minJumpsNeeded = minJumps(arr, n);
    if (minJumpsNeeded != -1)
        printf("Minimum number of jumps needed: %d\n", minJumpsNeeded);
    else
        printf("It is not possible to reach the end of the array.\n");

    return 0;
}
