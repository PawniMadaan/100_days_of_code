#include <stdio.h>

// Function to find ceil of x (first element >= x)
int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     // Potential ceil
            high = mid - 1;   // Move left to find first occurrence
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input x
    printf("Enter x: ");
    scanf("%d", &x);

    // Find ceil index
    int index = findCeil(arr, n, x);

    printf("%d\n", index);

    return 0;
}
