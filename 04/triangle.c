#include <stdio.h>
#include <math.h>

int main()
{
    float base, height, area;
    scanf("%f %f", &base, &height);
    area = (base * height) / 2;

    printf("The area is %f ", area);

    return 0;
}