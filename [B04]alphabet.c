#include <stdio.h>

int main() {
  char ch;
  scanf("%c", &ch);
  (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
      ? printf("%c is an alphabet.\n", ch)
      : printf("%c is not an alphabet.\n", ch);
  ;
  return 0;
}