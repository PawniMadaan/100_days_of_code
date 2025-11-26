#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};

    // Increase count for string s
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Decrease count for string t
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // If all frequencies return to zero → anagram
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
