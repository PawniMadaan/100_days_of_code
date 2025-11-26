#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // read full line including spaces

    // Remove newline character if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
