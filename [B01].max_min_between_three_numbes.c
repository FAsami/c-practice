#include <stdio.h>

int main() {
  int number1, number2, number3, max_number, min_number;
  scanf("%d %d %d", &number1, &number2, &number3);
  max_number = number1 > number2   ? number1 > number3 ? number1 : number3
               : number2 > number3 ? number2
                                   : number3;
  min_number = number1 < number2   ? number1 < number3 ? number1 : number3
               : number2 < number3 ? number2
                                   : number3;

  printf("Max %d \n", max_number);
  printf("Min %d", min_number);
  return 0;
}