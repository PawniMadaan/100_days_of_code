#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];   // stores the best answer
    int currentSum = arr[0]; // running sum

    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start new from arr[i]
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // Update global max
        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("%d", maxSoFar);

    return 0;
}
