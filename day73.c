#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // flag to track if inside a word
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If file ends while inside a word
    if (inWord) {
        words++;
    }

    fclose(file);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    return 0;
}
