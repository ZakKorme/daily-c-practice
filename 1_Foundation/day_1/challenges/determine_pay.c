#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

int main()
{
    int hours;
    float pay, tax;

    printf("Enter hours worked: \n");
    scanf("%d", &hours);

    tax = 0;
    // Calculating pay for hours worked
    if (hours > 40)
    {
        pay = (40 * PAYRATE) + ((hours - 40) * (PAYRATE * 1.5));
    }
    else
    {
        pay = hours * PAYRATE;
    }

    // Calculating tax for hours worked
    if (pay <= 300)
    {
        tax += pay * TAXRATE_300;
    }
    else if (pay > 300 && pay <= 450)
    {
        tax += 300 * TAXRATE_300;
        tax += (pay - 300) * TAXRATE_150;
    }
    else
    {
        tax += 300 * TAXRATE_300;
        tax += 150 * TAXRATE_150;
        tax += (pay - 450) * TAXRATE_REST;
    }

    printf("Pay for %d hours worked: $%.2f\n", hours, pay);
    printf("Tax for %d hours worked: $%.2f\n", hours, tax);
    printf("After-Tax Pay for %d hours worked: $%.2f\n", hours, pay - tax);

    return 0;
}