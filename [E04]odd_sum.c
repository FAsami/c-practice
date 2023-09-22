#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter a positive integer (n): ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Please enter a positive integer.\n");
    return 1;
  }

  for (int i = 1; i <= n; i += 2) {
    sum += i;
  }

  printf("The sum of odd numbers between 1 and %d is: %d\n", n, sum);

  return 0;
}
