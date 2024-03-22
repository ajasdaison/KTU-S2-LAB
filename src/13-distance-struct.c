// Read two input each representing the distances between two points in the
// Euclidean space,store these in structure variables and add the two distance
// values.
#include <math.h>
#include <stdio.h>

struct Point {
  double x;
  double y;
};

double distance(struct Point p1, struct Point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
  struct Point point1, point2;          // NOLINT
  double dist1, dist2, total_distance;  // NOLINT

  printf("Enter coordinates of first point (x y): ");
  scanf("%lf %lf", &point1.x, &point1.y);

  printf("Enter coordinates of second point (x y): ");
  scanf("%lf %lf", &point2.x, &point2.y);

  dist1 = distance(point1, point2);
  dist2 = distance(point2, point1);

  total_distance = dist1 + dist2;

  printf("Total distance between the two points: %.2f\n", total_distance);

  return 0;
}
