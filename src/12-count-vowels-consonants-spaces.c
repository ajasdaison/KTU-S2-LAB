// Read a string (ending with a $ symbol), store it in an array and count the
// number of vowels, consonants and spaces in it.
#include <stdio.h>
#define MAX_WORD_LENGTH 100

int main() {
  char str[MAX_WORD_LENGTH];
  int vowels = 0, consonants = 0, spaces = 0;  // NOLINT
  printf("Enter a string (end with $): ");
  scanf("%[^$]s", str);

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      vowels++;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      consonants++;
    } else if (ch == ' ') {
      spaces++;
    }
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Spaces: %d\n", spaces);

  return 0;
}
