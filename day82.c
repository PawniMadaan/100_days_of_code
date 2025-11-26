#include <stdio.h>

// Define enum for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    // Example: Assign value to light
    light = RED;   // You can change to YELLOW or GREEN to test

    // Print action based on enum value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}
