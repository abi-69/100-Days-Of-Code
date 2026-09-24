#include <ctype.h>
#include <stdio.h>

/* Q92: Find the first repeating lowercase alphabet. */
int main(void) {
    char text[1000];
    int seen[26] = {0};

    fgets(text, sizeof(text), stdin);
    for (int index = 0; text[index] != '\0' && text[index] != '\n'; index++) {
        if (islower((unsigned char)text[index])) {
            int alphabet_index = text[index] - 'a';
            if (seen[alphabet_index]) {
                printf("%c\n", text[index]);
                return 0;
            }
            seen[alphabet_index] = 1;
        }
    }

    puts("-1");
    return 0;
}
