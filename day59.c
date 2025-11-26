#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid");
        return 0;
    }

    int currentSum = 0;

    // Sum of first window
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k]; // add next, remove previous
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
