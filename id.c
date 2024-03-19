// Using structure, read and print data of n employees (Name, Employee Id and
// Salary)
#include <stdio.h>

struct Employee {
  char name[50];
  int employeeId;
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
    scanf("%d", &employees[i].employeeId);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
  }

  printf("\nEmployee Details:\n");
  for (int i = 0; i < n; i++) {
    printf("\nEmployee %d:\n", i + 1);
    printf("Name: %s\n", employees[i].name);
    printf("Employee ID: %d\n", employees[i].employeeId);
    printf("Salary: %.2f\n", employees[i].salary);
  }

  return 0;
}
