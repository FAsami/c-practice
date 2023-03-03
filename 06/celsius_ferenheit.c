#include <stdio.h>
#include <math.h>
int main()
{
    float celsius, ferenheit;
    scanf("%f", &celsius);
    ferenheit = (celsius * 9.0 / 5.0) + 32.0; // Cels to fahr

    printf("Temperature in ferenheith is :  %f", ferenheit);
    return 0;
}