#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, average, percentage;
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    percentage = (total / (5 * 100)) * 100; // assuming each sub is on 100 marks

    printf("Total: %f Agerage : %f percentage: %f %%", total, average, percentage);
    return 0;
}