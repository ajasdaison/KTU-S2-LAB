/*Read a Natural Number and check whether the number is Armstrong or not*/
#include <stdio.h>

int main() {
  int num, temp, remainder, result = 0, count = 0;

  printf("Enter a natural number: ");// enter a 3 digit number
  scanf("%d", &num);

  temp = num;
  while (temp != 0) {
    remainder = temp % 10;
    result += remainder * remainder * remainder;
    temp = temp / 10;
    count++;
  }

  if (result == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
}
