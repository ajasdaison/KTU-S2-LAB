// Read n integers, store them in an array and find their sum and average
#include <stdio.h>

int main() {
  int n, i;
  float sum = 0, average;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  int numbers[n];

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]); // enter the number with spaces
    sum += numbers[i];
  }

  average = sum / n;

  printf("Sum = %.2f\n", sum);
  printf("Average = %.2f\n", average);

  return 0;
}
