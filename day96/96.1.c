#include <stdio.h>

/* Q146: Print an employee with a nested joining-date structure. */
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int employee_id;
    struct Date joining_date;
};

int main(void) {
    struct Employee employee;
    scanf("%99s %d %d %d %d", employee.name, &employee.employee_id,
          &employee.joining_date.day, &employee.joining_date.month,
          &employee.joining_date.year);
    printf("Name: %s\nEmployee ID: %d\nJoining Date: %02d/%02d/%04d\n",
           employee.name, employee.employee_id, employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);
    return 0;
}
