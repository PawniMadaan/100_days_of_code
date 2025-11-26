#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT  // helper to get number of enum values
};

int main() {
    // Array of strings corresponding to enum names
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum names and values:\n");
    for (int i = 0; i < ROLE_COUNT; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
