/*Read the radius of a circle, calculate its area and display it*/
#define PI 3.14
#include <stdio.h>
int main() {
  float radius;
  printf("Enter the Radius:\t");
  scanf("%f", &radius);
  float area;
  area = PI * radius * radius;
  printf("The area of Circle is: %0.2f", area);
  return 0;
}
