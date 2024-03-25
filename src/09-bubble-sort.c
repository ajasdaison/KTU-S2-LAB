// Read n integers, store them in an array and sort the elements in the array
// using Bubble Sort algorithm
#include <stdio.h>
int main() {
  int n;
  int temp;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1])

      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("Sorted list in ascending order:\n");

  for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
  return 0;
}
