#include <stdio.h>

/* Q114: Find the longest substring without repeating characters. */
int main(void) {
    char text[1000];
    int last_seen[256], start = 0, best = 0;
    for (int i = 0; i < 256; i++) last_seen[i] = -1;
    fgets(text, sizeof(text), stdin);
    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        unsigned char character = (unsigned char)text[i];
        if (last_seen[character] >= start) start = last_seen[character] + 1;
        last_seen[character] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
