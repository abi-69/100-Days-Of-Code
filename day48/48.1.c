#include <stdio.h>
#include <string.h>

/* Q95: Check whether one string is a rotation of another. */
int main(void) {
    char first[1000], second[1000], doubled[2000];
    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    if (strlen(first) != strlen(second)) {
        puts("Not Rotation");
        return 0;
    }

    snprintf(doubled, sizeof(doubled), "%s%s", first, first);
    puts(strstr(doubled, second) != NULL ? "Rotation" : "Not Rotation");
    return 0;
}
