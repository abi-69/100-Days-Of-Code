#include <stdio.h>

/* Q89: Count the frequency of a given character. */
int main(void) {
    char text[1000];
    char target;
    int frequency = 0;

    fgets(text, sizeof(text), stdin);
    scanf(" %c", &target);
    for (int index = 0; text[index] != '\0' && text[index] != '\n'; index++) {
        if (text[index] == target) {
            frequency++;
        }
    }

    printf("%d\n", frequency);
    return 0;
}
