#include <stdio.h>
int main()
{
    int days, number_of_years, number_of_weeks, number_of_days;
    scanf("%d", &days);
    number_of_years = days / 365;
    number_of_weeks = (days - number_of_years * 365) / 7;
    number_of_days = days - ((number_of_years * 365) + (number_of_weeks * 7));

    printf("Years: %d  Weeks: %d Days : %d", number_of_years, number_of_weeks, number_of_days);
    return 0;
}