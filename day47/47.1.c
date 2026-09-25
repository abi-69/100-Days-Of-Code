#include <stdio.h>
#include <ctype.h>

/* Q93: Check whether two strings are anagrams. */
int main(void) {
    char first[1000], second[1000];
    int frequency[256] = {0};

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    for (int i = 0; first[i] != '\0' && first[i] != '\n'; i++) {
        if (!isspace((unsigned char)first[i])) {
            frequency[(unsigned char)tolower((unsigned char)first[i])]++;
        }
    }
    for (int i = 0; second[i] != '\0' && second[i] != '\n'; i++) {
        if (!isspace((unsigned char)second[i])) {
            frequency[(unsigned char)tolower((unsigned char)second[i])]--;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            puts("Not Anagram");
            return 0;
        }
    }
    puts("Anagram");
    return 0;
}
