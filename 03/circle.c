#include <stdio.h>
#include <math.h>

int main()
{
    float radius, diameter, circumference, area;
    scanf("%f", &radius);
    diameter = 2 * radius;
    area = M_PI * (pow(radius, 2));
    circumference = 2 * M_PI * radius;
    printf("The area is %f , the diameter is %f and the circumference is %f", area, diameter, circumference);

    return 0;
}