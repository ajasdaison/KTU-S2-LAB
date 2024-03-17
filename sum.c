// Read two numbers, add them and display their sum
#include <stdio.h>
int main() {
  float num1, num2;
  printf("Enter two numbers:\t");
  scanf("%f,%f", &num1, &num2); // enter the numbers by using "," in o/p
  float sum;
  sum = num1 + num2;
  printf("The sum is: %0.2f", sum);
  return 0;
}
