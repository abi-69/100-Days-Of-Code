#include <stdio.h>

/* Q86: Check whether a string is a palindrome. */
int main(void) {
    char text[1000];
    int length = 0;
    int palindrome = 1;

    fgets(text, sizeof(text), stdin);
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }
    for (int left = 0; left < length / 2; left++) {
        if (text[left] != text[length - 1 - left]) {
            palindrome = 0;
            break;
        }
    }

    puts(palindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}
