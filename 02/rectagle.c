#include <stdio.h>

int main()
{
    int breadth, length, area, perimeter;
    scanf("%d %d", &breadth, &length);

    area = breadth * length;
    perimeter = 2 * (breadth + length);
    printf("The area is %d and perimeter is %d", area, perimeter);
    return 0;
}