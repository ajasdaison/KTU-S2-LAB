// Create a file and perform the following
// Write data to the file
// Read the data in a given file & display the file content on console
// append new data and display on console
#include <stdio.h>

int main() {
  FILE *file;
  char data[100];

  file = fopen("example.txt", "w");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  printf("Enter data to write to the file: ");
  fgets(data, sizeof(data), stdin);
  fprintf(file, "%s", data);
  fclose(file);

  file = fopen("example.txt", "r");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  printf("File content:\n");
  while (fgets(data, sizeof(data), file)) {
    printf("%s", data);
  }
  fclose(file);

  file = fopen("example.txt", "a");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  printf("Enter data to append to the file: ");
  fgets(data, sizeof(data), stdin);
  fprintf(file, "%s", data);
  fclose(file);

  file = fopen("example.txt", "r");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  printf("Updated file content:\n");
  while (fgets(data, sizeof(data), file)) {
    printf("%s", data);
  }
  fclose(file);

  return 0;
}
