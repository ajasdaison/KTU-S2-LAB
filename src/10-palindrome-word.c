// Read a string (word), store it in an array and check whether it is a
// palindrome word or not.
#include <stdio.h>
#define MAX_WORD_LENGTH 100

int main() {
  char word[MAX_WORD_LENGTH];
  int i, length = 0;  // NOLINT
  int is_palindrome = 1;

  printf("Enter a word: ");
  scanf("%s", word);

  while (word[length] != '\0') {
    length++;
  }

  for (i = 0; i < length / 2; i++) {
    if (word[i] != word[length - i - 1]) {
      is_palindrome = 0;
      break;
    }
  }

  if (is_palindrome)
    printf("%s is a palindrome.\n", word);
  else
    printf("%s is not a palindrome.\n", word);

  return 0;
}
