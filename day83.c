#include <stdio.h>

// Define enum for months
enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    // Array to store number of days in each month
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Loop through months and print days
    for (int month = JANUARY; month <= DECEMBER; month++) {
        switch(month) {
            case JANUARY:   printf("January: %d days\n", daysInMonth[month]); break;
            case FEBRUARY:  printf("February: %d days\n", daysInMonth[month]); break;
            case MARCH:     printf("March: %d days\n", daysInMonth[month]); break;
            case APRIL:     printf("April: %d days\n", daysInMonth[month]); break;
            case MAY:       printf("May: %d days\n", daysInMonth[month]); break;
            case JUNE:      printf("June: %d days\n", daysInMonth[month]); break;
            case JULY:      printf("July: %d days\n", daysInMonth[month]); break;
            case AUGUST:    printf("August: %d days\n", daysInMonth[month]); break;
            case SEPTEMBER: printf("September: %d days\n", daysInMonth[month]); break;
            case OCTOBER:   printf("October: %d days\n", daysInMonth[month]); break;
            case NOVEMBER:  printf("November: %d days\n", daysInMonth[month]); break;
            case DECEMBER:  printf("December: %d days\n", daysInMonth[month]); break;
        }
    }

    return 0;
}
