#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  // read input including spaces

    int len = strlen(str);

    // Convert entire string to lowercase first
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize first alphabetic character
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("%s", str);

    return 0;
}
