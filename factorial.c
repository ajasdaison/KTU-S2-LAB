// Find the factorial of a given Natural Number n usingrecursive and non
// recursive functions
#include <stdio.h>

unsigned long long factorialRecursive(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factorialRecursive(n - 1);
}

unsigned long long factorialNonRecursive(int n) {
  unsigned long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int n;
  printf("Enter a natural number: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    unsigned long long fact_rec = factorialRecursive(n);
    unsigned long long fact_non_rec = factorialNonRecursive(n);
    printf("Factorial of %d using recursive function: %llu\n", n, fact_rec);
    printf("Factorial of %d using non-recursive function: %llu\n", n,
           fact_non_rec);
  }

  return 0;
}
