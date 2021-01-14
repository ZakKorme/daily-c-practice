#include <stdio.h>

#define MONTHS 12
#define YEARS 5
int main()
{
    float weather[YEARS][MONTHS] = {
        {7.4, 5.4, 2.1, 5.6, 7.6, 5.6, 8.9, 8.7, 4.1, 5.6, 6.5, .78},
        {7.4, 5.4, 2.1, 5.6, 7.6, 5.6, 8.9, 8.7, 4.1, 5.6, 6.5, .78},
        {7.4, 5.4, 2.1, 5.6, 7.6, 5.6, 8.9, 8.7, 4.1, 5.6, 6.5, .78},
        {7.4, 5.4, 2.1, 5.6, 7.6, 5.6, 8.9, 8.7, 4.1, 5.6, 6.5, .78},
        {7.4, 5.4, 2.1, 5.6, 7.6, 5.6, 8.9, 8.7, 4.1, 5.6, 6.5, .78}};
    float yearAverage;
    int yearIndex = 0;
    int i, j;
    printf("YEAR: \t TOTAL:\n");
    for (i = 0; i < YEARS; ++i)
    {
        yearAverage = 0;
        for (j = 0; j < 12; ++j)
        {
            yearAverage += weather[i][j];
        }
        printf("201%d \t %.2f \n", yearIndex, yearAverage);
        ++yearIndex;
    }

    printf("MONTHLY: \n");
    printf("Year\tJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\t \n");
    for (i = 0; i < YEARS; ++i)
    {
        printf("201%d\t", i);
        for (j = 0; j < MONTHS; ++j)
            printf("%.2f\t", weather[i][j]);
        printf("\n");
    }
}