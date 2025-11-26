#include <stdio.h>

// Function to find first occurrence using binary search
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;  // Move left to find earlier occurrence
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to find last occurrence using binary search
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;  // Move right to find later occurrence
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target
    printf("Enter target: ");
    scanf("%d", &target);

    // Find occurrences
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    // Output
    if (first == -1)
        printf("-1 -1\n");
    else
        printf("%d %d\n", first, last);

    return 0;
}
