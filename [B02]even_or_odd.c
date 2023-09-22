#include <stdio.h>

int main() {
  int number1, number2;
  scanf("%d %d", &number1, &number2);
  number1 % 2 == 0 ? printf("EVEN") : printf("ODD");
  return 0;
}