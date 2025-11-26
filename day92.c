#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        getchar();  // Consume leftover newline
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Print details of all students
    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
