#include <stdio.h>
#include <string.h>

/* Q94: Find the longest word in a sentence. */
int main(void) {
    char sentence[1000], longest[1000] = "", current[1000];
    int length = 0;

    fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            current[length++] = sentence[i];
        } else if (length > 0) {
            current[length] = '\0';
            if (length > (int)strlen(longest)) {
                strcpy(longest, current);
            }
            length = 0;
        }
        if (sentence[i] == '\0') break;
    }

    printf("%s\n", longest);
    return 0;
}
