#include <stdio.h>
#include <math.h>
int main()
{
    float celsius, ferenheit;
    scanf("%f", &ferenheit);

    celsius = (ferenheit - 32.0) * 5.0 / 9.0;

    printf("Temperature in celsius is :  %f", celsius);
    return 0;
}