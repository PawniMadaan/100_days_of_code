#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];

    // Take filename as input
    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar();  // consume leftover newline

    // Take new line of text
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline at end if present
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    // Open file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Append text to file
    fprintf(file, "%s\n", text);

    // Close file
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}
