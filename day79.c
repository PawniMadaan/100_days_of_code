#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    // Read integers until EOF
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    double average = (double)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}
