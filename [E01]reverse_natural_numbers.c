#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n <= 0) {
    printf("Please enter a positive integer.\n");
    return 1;
  }
  int i = n;
  while (i >= 1) {
    printf("%d ", i);
    i--;
  }
  printf("\n");
  return 0;
}
