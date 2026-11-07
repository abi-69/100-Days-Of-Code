#include <stdio.h>

/* Q140: Store and print a person's gender using an enum in a struct. */
enum Gender { MALE, FEMALE, OTHER };
struct Person { char name[50]; enum Gender gender; };
int main(void) { struct Person person; int gender; scanf("%49s %d", person.name, &gender); person.gender = (enum Gender)gender; printf("%s: %s\n", person.name, person.gender == MALE ? "Male" : person.gender == FEMALE ? "Female" : "Other"); return 0; }
