#include <stdio.h>
#include <math.h>
int main()
{
    float P, T, R, simple_interest, compund_interest;
    scanf("%f %f %f", &P, &T, &R);
    simple_interest = (P * T * R) / 100;
    compund_interest = P * pow((1 + R / 100), T) - P;
    printf("The compound interest is %f and the simple interst is %f", compund_interest, simple_interest);
    return 0;
}