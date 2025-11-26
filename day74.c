#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];

    // Take filenames as input
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error creating destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(src);
    fclose(dest);

    return 0;
}
