#include <stdio.h>
#include <math.h>
int main()
{
    float base, power, result;
    scanf("%f %f", &base, &power);

    result = pow(base, power);
    printf("The result is: %f", result);
    return 0;
}