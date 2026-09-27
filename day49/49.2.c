#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Q98: Print initials with the surname displayed in full. */
int main(void) {
    char name[200], words[20][50];
    int count = 0;

    fgets(name, sizeof(name), stdin);
    char *token = strtok(name, " \t\n");
    while (token != NULL && count < 20) {
        strncpy(words[count], token, sizeof(words[count]) - 1);
        words[count][sizeof(words[count]) - 1] = '\0';
        count++;
        token = strtok(NULL, " \t\n");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", (char)toupper((unsigned char)words[i][0]));
    }
    if (count > 0) {
        printf("%s", words[count - 1]);
    }
    putchar('\n');
    return 0;
}
