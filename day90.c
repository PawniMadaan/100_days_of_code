#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person's details
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    // Remove newline character if present
    size_t len = strlen(p.name);
    if (len > 0 && p.name[len - 1] == '\n') {
        p.name[len - 1] = '\0';
    }

    printf("Enter age: ");
    scanf("%d", &p.age);

    int genderChoice;
    printf("Select gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &genderChoice);
    p.gender = (enum Gender)genderChoice;

    // Print person's gender
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
