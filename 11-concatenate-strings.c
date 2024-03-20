// Read two strings (each one ending with a $ symbol), store them in arrays and
// concatenate them without using library functions.
#include <stdio.h>

int main() {
  char str1[100], str2[100];
  int i = 0, j = 0;

  printf("Enter the first string ending with $: ");
  while ((str1[i] = getchar()) != '$') {
    i++;
  }
  str1[i] = '\0';

  printf("Enter the second string ending with $: ");
  while ((str2[j] = getchar()) != '$') {
    j++;
  }
  str2[j] = '\0';

  i = 0;
  while (str1[i] != '\0') {
    i++;
  }
  j = 0;
  while (str2[j] != '\0') {
    str1[i] = str2[j];
    i++;
    j++;
  }
  str1[i] = '\0';

  printf("Concatenated string: %s\n", str1);

  return 0;
}
