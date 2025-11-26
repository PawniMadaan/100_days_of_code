#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Total sum of 0 to n
    long long total = (long long)n * (n + 1) / 2;

    // Missing number = total sum - sum of array
    int missing = (int)(total - sum);
    printf("%d", missing);

    return 0;
}
