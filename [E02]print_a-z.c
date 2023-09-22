#include <stdio.h>

int main() {
  char alphabet = 'a';

  while (alphabet <= 'z') {
    printf("%c ", alphabet);
    alphabet++;
  }

  printf("\n");
  return 0;
}
