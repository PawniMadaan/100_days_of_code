#include <stdio.h>

// Define an enum with default and explicit values
enum Status {
    SUCCESS = 10,   // explicit value
    FAILURE,        // will be 11
    TIMEOUT = 20,   // explicit value
    UNKNOWN         // will be 21
};

int main() {
    // Print enum values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("UNKNOWN = %d\n", UNKNOWN);

    return 0;
}
