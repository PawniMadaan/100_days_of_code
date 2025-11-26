#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Input student data
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    // Remove newline character if present
    size_t len = strlen(s.name);
    if (len > 0 && s.name[len - 1] == '\n') {
        s.name[len - 1] = '\0';
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student data
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
