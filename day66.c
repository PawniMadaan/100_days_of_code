#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    int found = 0;

    // Check all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("-1 -1");

    return 0;
}
