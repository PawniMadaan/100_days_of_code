#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        long long leftSum = (long long)x * (x + 1) / 2;
        long long rightSum = total - (long long)(x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
