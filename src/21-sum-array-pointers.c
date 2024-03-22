// Compute sum of the elements stored in an array using pointers and user
// defined function.
#include <stdio.h>

int array_sum(const int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(arr + i);
  }
  return sum;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};  // NOLINT
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = array_sum(arr, size);

  printf("Sum of elements in the array: %d\n", sum);

  return 0;
}
