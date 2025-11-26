#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_all = 0;

    // XOR all array elements
    for (int i = 0; i < n; i++) {
        xor_all ^= arr[i];
    }

    // XOR with numbers from 1 to n-1
    // (because array size = n, one number repeated)
    for (int i = 1; i <= n - 1; i++) {
        xor_all ^= i;
    }

    printf("%d", xor_all);  // repeated element

    return 0;
}
