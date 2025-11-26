#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calculate total sum
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    // Find pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    // If no pivot index exists
    printf("-1\n");
    return 0;
}
