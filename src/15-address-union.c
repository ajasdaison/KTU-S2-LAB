// Declare a union containing 5 string variables (Name, House Name, City Name,
// State and Pin code) each with a length of C_SIZE (user defined constant).
// Then, read and display the address of a person using a variable of the union.
#include <stdio.h>

#define C_SIZE 50

union Address {
  char name[C_SIZE];
  char house_name[C_SIZE];
  char city[C_SIZE];
  char state[C_SIZE];
  char pin_code[C_SIZE];
};

void remove_newline(char *str) {
  int i = 0;
  while (str[i] != '\n' && str[i] != '\0') {
    i++;
  }
  if (str[i] == '\n') {
    str[i] = '\0';
  }
}

int main() {
  union Address person_address;

  printf("Enter Name: ");
  fgets(person_address.name, C_SIZE, stdin);
  remove_newline(person_address.name);

  printf("Enter House Name: ");
  fgets(person_address.house_name, C_SIZE, stdin);
  remove_newline(person_address.house_name);

  printf("Enter City: ");
  fgets(person_address.city, C_SIZE, stdin);
  remove_newline(person_address.city);

  printf("Enter State: ");
  fgets(person_address.state, C_SIZE, stdin);
  remove_newline(person_address.state);

  printf("Enter Pin Code: ");
  fgets(person_address.pin_code, C_SIZE, stdin);
  remove_newline(person_address.pin_code);

  printf("\nAddress:\n");
  printf("Name: %s\n", person_address.name);
  printf("House Name: %s\n", person_address.house_name);
  printf("City: %s\n", person_address.city);
  printf("State: %s\n", person_address.state);
  printf("Pin Code: %s\n", person_address.pin_code);

  return 0;
}
