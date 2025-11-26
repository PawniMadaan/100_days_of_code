#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // consume leftover newline

    char name[50];
    int roll;
    float marks;

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Input and write records to file
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        // Remove newline character
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);
        getchar(); // consume leftover newline

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    // Read and display records
    printf("\nStudent Records from File:\n");
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
