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

    for (int i = 0; i <= n - k; i++) {

        int found = 0;  // flag to mark negative found

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);  // first negative
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0");

        if (i != n - k)
            printf(" ");  // space between outputs
    }

    return 0;
}
