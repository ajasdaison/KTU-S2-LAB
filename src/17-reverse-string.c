// Read a string (word), store it in an array and obtain its reverse by using a
// user defined function.
#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 100

void reverse_string(char *str) {
  int length = strlen(str);
  int start = 0;
  int end = length - 1;

  while (start < end) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}

int main() {
  char str[MAX_WORD_LENGTH];

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Original string: %s\n", str);

  reverse_string(str);

  printf("Reversed string: %s\n", str);

  return 0;
}
