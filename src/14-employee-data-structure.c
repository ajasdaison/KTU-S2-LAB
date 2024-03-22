// Using structure, read and print data of n employees (Name, Employee Id and
// Salary)
#include <stdio.h>
#define MAX_WORD_LENGTH 50

struct Employee {
  char name[MAX_WORD_LENGTH];
  int employee_id;
  float salary;
};

int main() {
  int n;

  printf("Enter the number of employees: ");
  scanf("%d", &n);

  struct Employee employees[n];

  for (int i = 0; i < n; i++) {
    printf("\nEnter details for employee %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Employee ID: ");
    scanf("%d", &employees[i].employee_id);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
  }

  printf("\nEmployee Details:\n");
  for (int i = 0; i < n; i++) {
    printf("\nEmployee %d:\n", i + 1);
    printf("Name: %s\n", employees[i].name);
    printf("Employee ID: %d\n", employees[i].employee_id);
    printf("Salary: %.2f\n", employees[i].salary);
  }

  return 0;
}
