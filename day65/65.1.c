#include <stdio.h>
#include <ctype.h>

/* Q115: Determine whether two lowercase strings are anagrams. */
int main(void) {
    char first[1000], second[1000];
    int frequency[26] = {0};
    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);
    for (int i = 0; first[i] != '\0'; i++) if (islower((unsigned char)first[i])) frequency[first[i] - 'a']++;
    for (int i = 0; second[i] != '\0'; i++) if (islower((unsigned char)second[i])) frequency[second[i] - 'a']--;
    for (int i = 0; i < 26; i++) if (frequency[i] != 0) { puts("Not Anagram"); return 0; }
    puts("Anagram");
    return 0;
}
