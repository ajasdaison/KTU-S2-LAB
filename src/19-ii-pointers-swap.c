// Do the following using pointers
//  swap two numbers using a user defined function
#include <stdio.h>
#define FIRST_NUMBER 5
#define SECOND_NUMBER 7

void swap_numbers(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}  // NOLINT

int main() {
  int num1 = FIRST_NUMBER, num2 = SECOND_NUMBER;  // NOLINT
  printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
  swap_numbers(&num1, &num2);
  printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
  return 0;
}
