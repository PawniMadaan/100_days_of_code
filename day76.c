#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("File contents:\n");

    char ch;
    // Read and display each character until EOF
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);  // Close the file
    return 0;
}
