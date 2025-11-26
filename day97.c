#include <stdio.h>
#include <string.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); // consume leftover newline

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        size_t len = strlen(employees[i].name);
        if (len > 0 && employees[i].name[len - 1] == '\n') {
            employees[i].name[len - 1] = '\0';
        }

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &employees[i].joiningDate.day, &employees[i].joiningDate.month, &employees[i].joiningDate.year);

        getchar(); // consume leftover newline
    }

    // Write employees to binary file
    FILE *file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), n, file);
    fclose(file);
    printf("\nEmployee data saved to employees.dat successfully.\n");

    // Read employees from binary file
    struct Employee readEmployees[n];
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(readEmployees, sizeof(struct Employee), n, file);
    fclose(file);

    // Display employee details
    printf("\nEmployee Details from File:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmployees[i].name);
        printf("ID: %d\n", readEmployees[i].id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n",
               readEmployees[i].joiningDate.day,
               readEmployees[i].joiningDate.month,
               readEmployees[i].joiningDate.year);
    }

    return 0;
}
