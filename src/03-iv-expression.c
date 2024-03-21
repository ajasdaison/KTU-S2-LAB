/*Evaluate the arithmetic expression ((a-b/c*d+e) (f+g)) and display its
 * solution. Read the values of the variables from the user through console.*/
#include <stdio.h>
int main() {
  int a, b, c, d, e, f, g;
  printf("Enter the digits a,b,c,d,e,f,g:\t");
  scanf("%d,%d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f, &g);
  int s;
  s = ((a - b / c * d + e) * (f + g));
  printf("%d", s);
  return 0;
}
