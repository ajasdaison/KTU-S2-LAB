// Do the following using pointers
//  add two numbers
#include <stdio.h>
#define FIRST_NUMBER 5
#define SECOND_NUMBER 7

void add_numbers(const int *num1, const int *num2, int *result) {
  *result = *num1 + *num2;
}  // NOLINT

int main() {
  int num1 = FIRST_NUMBER, num2 = SECOND_NUMBER, result;  // NOLINT
  add_numbers(&num1, &num2, &result);
  printf("Sum: %d\n", result);
  return 0;
}
