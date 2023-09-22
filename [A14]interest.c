/* Hints:
Compound Interest:
Forula:A = P(1 + \frac{R})^{T} (where P = Principle, T=Time, R=Rate)
Simple Interest:
Formula: Principle * Time * Rate / 100
*/

#include <math.h>
#include <stdio.h>
int main() {
  float P, T, R, simple_interest, compund_interest;
  scanf("%f %f %f", &P, &T, &R);
  simple_interest = (P * T * R) / 100;
  compund_interest = P * pow((1 + R / 100), T) - P;
  printf("The compound interest is %f and the simple interst is %f",
         compund_interest, simple_interest);
  return 0;
}
