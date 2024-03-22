// Open a text input file and count number of characters, words and lines in it;
// and store the results in an output file.
#include <stdio.h>
#include <stdlib.h>
#define MAX_WORD_LENGTH 100

int main() {
  FILE *input_file, *output_file;  // NOLINT
  char filename[MAX_WORD_LENGTH];
  int ch;
  int characters = 0, words = 0, lines = 0;  // NOLINT

  printf("Enter the name of the input file: ");
  scanf("%s", filename);

  input_file = fopen(filename, "r");

  if (input_file == NULL) {
    printf("Unable to open file.\n");
    return 1;
  }

  while ((ch = fgetc(input_file)) != EOF) {
    characters++;

    if (ch == ' ' || ch == '\n' || ch == '\t') {
      words++;
    }

    if (ch == '\n') {
      lines++;
    }
  }

  fclose(input_file);

  if (characters > 0) {
    words++;
    lines++;
  }

  output_file = fopen("output.txt", "w");

  fprintf(output_file, "Number of characters: %d\n", characters);
  fprintf(output_file, "Number of words: %d\n", words);
  fprintf(output_file, "Number of lines: %d\n", lines);

  fclose(output_file);

  printf("Results have been stored in output.txt\n");

  return 0;
}
