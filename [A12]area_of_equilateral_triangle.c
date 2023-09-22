#include <stdio.h>
#include <math.h>
int main()
{
    float angle1, angle2, angle3;
    scanf("%f %f", &angle1, &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("Third angle is : %f", angle3);
    return 0;
    ;
}