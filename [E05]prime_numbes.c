#include <stdbool.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n < 2) {
    printf("There are no prime numbers in the specified range.\n");
    return 1;
  }
  printf("Prime numbers between 1 and %d are:\n", n);
  for (int i = 2; i <= n; i++) {
    bool is_prime = true;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
