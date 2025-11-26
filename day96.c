#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee with nested Date
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // Remove newline character
    size_t len = strlen(emp.name);
    if (len > 0 && emp.name[len - 1] == '\n') {
        emp.name[len - 1] = '\0';
    }

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
