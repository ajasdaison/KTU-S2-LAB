// Declare a union containing 5 string variables (Name, House Name, City Name,
// State and Pin code) each with a length of C_SIZE (user defined constant).
// Then, read and display the address of a person using a variable of the union.
#include <stdio.h>

#define C_SIZE 50

union Address {
  char Name[C_SIZE];
  char HouseName[C_SIZE];
  char City[C_SIZE];
  char State[C_SIZE];
  char PinCode[C_SIZE];
};

void removeNewline(char *str) {
  int i = 0;
  while (str[i] != '\n' && str[i] != '\0') {
    i++;
  }
  if (str[i] == '\n') {
    str[i] = '\0';
  }
}

int main() {
  union Address personAddress;

  printf("Enter Name: ");
  fgets(personAddress.Name, C_SIZE, stdin);
  removeNewline(personAddress.Name);

  printf("Enter House Name: ");
  fgets(personAddress.HouseName, C_SIZE, stdin);
  removeNewline(personAddress.HouseName);

  printf("Enter City: ");
  fgets(personAddress.City, C_SIZE, stdin);
  removeNewline(personAddress.City);

  printf("Enter State: ");
  fgets(personAddress.State, C_SIZE, stdin);
  removeNewline(personAddress.State);

  printf("Enter Pin Code: ");
  fgets(personAddress.PinCode, C_SIZE, stdin);
  removeNewline(personAddress.PinCode);

  printf("\nAddress:\n");
  printf("Name: %s\n", personAddress.Name);
  printf("House Name: %s\n", personAddress.HouseName);
  printf("City: %s\n", personAddress.City);
  printf("State: %s\n", personAddress.State);
  printf("Pin Code: %s\n", personAddress.PinCode);

  return 0;
}
