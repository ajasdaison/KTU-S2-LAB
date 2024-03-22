// Read n integers, store them in an array and search for an element in the
// array using an algorithm for Linear Search Correct
#include <stdio.h>
int main() {
  int n;
  printf("Enter the number of integers: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the integers:\n");  // enter the numbers by separating them with
                                    // spaces
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int element;
  printf("Enter the element to search for: ");
  scanf("%d", &element);
  int key = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == element) {
      key = i + 1;
      break;
    }
  }

  if (key != 0) {
    printf("Element %d found at index %d.\n", element, key);
  } else {
    printf("Element %d not found in the array.\n", element);
  }

  return 0;
}
