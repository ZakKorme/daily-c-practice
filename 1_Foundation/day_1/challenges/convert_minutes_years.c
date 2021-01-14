#include <stdio.h>

int main()
{
    int minutes = 525600;
    double days, years, minutes_in_years;

    minutes_in_years = 525600;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minutes);

    years = (minutes / minutes_in_years);
    days = (minutes / 60) / 24;

    printf("There are %.2f years and %0.2f days in %i minutes\n", years, days, minutes);
    return 0;
}