#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];  // to store last seen index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;  // start of current window

    for (int i = 0; s[i] != '\0'; i++) {
        // If character is repeated inside the window
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        // Update last seen index
        lastIndex[(unsigned char)s[i]] = i;

        // Update max length
        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d", maxLen);

    return 0;
}
