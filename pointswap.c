// Do the following using pointers
//  swap two numbers using a user defined function
#include <stdio.h>

void swapNumbers(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int main() {
  int num1 = 5, num2 = 7;
  printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
  swapNumbers(&num1, &num2);
  printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
  return 0;
}
