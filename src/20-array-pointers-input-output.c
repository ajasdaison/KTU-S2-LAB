// Input and Print the elements of an array using pointers
#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int arr[MAX_SIZE];
  int *ptr;
  int size, i;  // NOLINT

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter %d elements: \n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  ptr = arr;

  printf("Elements of the array: ");
  for (i = 0; i < size; i++) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  return 0;
}
