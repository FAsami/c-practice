#include <stdio.h>
#include <math.h>

int main()
{
    float length_in_cm, length_in_meter, length_in_kilometer;
    scanf("%f", &length_in_cm);

    length_in_meter = length_in_cm / 100;
    length_in_kilometer = length_in_cm / 100000;

    printf("The length is meter is  %f and the lenght in kilometer is %f", length_in_meter, length_in_kilometer);

    return 0;
}