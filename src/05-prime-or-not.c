/*Read a Natural Number and check whether the number is prime or not*/
#include <stdio.h>
int main() {
  int num, i, flag = 0;
  printf("Enter the Number:\t");
  scanf("%d", &num);

  if (num == 1) {
    printf("1 is neither composite nor prime");
  } else if (num == 2) {
    printf("2 is a prime number");
  } else {
    for (i = 2; i <= num/2; i++) {
      if (num % i == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      printf("%d is a prime number", num);
    } else
      printf("%d is not a prime number", num);
  }
  return 0;
}
