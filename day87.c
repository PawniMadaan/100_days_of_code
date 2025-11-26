#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    // Example: assign a role
    role = USER; // You can change to ADMIN or GUEST to test

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}
