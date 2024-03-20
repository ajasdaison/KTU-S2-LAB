// Do the following using pointers
//  add two numbers
#include <stdio.h>

void addNumbers(int *num1, int *num2, int *result) { *result = *num1 + *num2; }

int main() {
  int num1 = 5, num2 = 7, result;
  addNumbers(&num1, &num2, &result);
  printf("Sum: %d\n", result);
  return 0;
}
