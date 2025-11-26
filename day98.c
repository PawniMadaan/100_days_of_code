#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to compare two students
int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1; // identical
    }
    return 0; // not identical
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    size_t len = strlen(s1.name);
    if (len > 0 && s1.name[len - 1] == '\n') s1.name[len - 1] = '\0';

    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    getchar(); // consume newline

    // Input second student
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    len = strlen(s2.name);
    if (len > 0 && s2.name[len - 1] == '\n') s2.name[len - 1] = '\0';

    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare students
    if (areIdentical(s1, s2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
