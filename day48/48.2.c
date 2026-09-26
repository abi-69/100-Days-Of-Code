#include <stdio.h>
#include <string.h>

/* Q96: Reverse each word without changing word order. */
int main(void) {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    int start = 0;
    for (int i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            for (int left = start, right = i - 1; left < right; left++, right--) {
                char temp = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = temp;
            }
            start = i + 1;
        }
        if (sentence[i] == '\0') break;
    }

    fputs(sentence, stdout);
    return 0;
}
