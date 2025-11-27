#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Pointer to structure
    struct Student *s;

    // Dynamic memory allocation
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Printing details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Roll  : %d\n", s->roll);
    printf("Marks : %.2f\n", s->marks);

    // Freeing allocated memory
    free(s);

    return 0;
}
