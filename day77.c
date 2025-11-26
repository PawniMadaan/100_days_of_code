#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    FILE *outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(inFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);  // convert lowercase to uppercase
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion completed. Check output.txt\n");

    return 0;
}
