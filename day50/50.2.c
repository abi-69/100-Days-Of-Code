#include <stdio.h>
#include <string.h>

/* Q100: Print all substrings of a string. */
int main(void) {
    char text[500];
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int length = (int)strlen(text);
    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++) {
                putchar(text[i]);
            }
            putchar('\n');
        }
    }
    return 0;
}
