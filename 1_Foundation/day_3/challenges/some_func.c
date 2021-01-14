#include <stdio.h>
#include <math.h>

int greatestCommon(int a, int b);
float absolute(float a);
int squareRoot(int a);

int main()
{
    int result = 0;

    result = squareRoot(65);

    printf("%d\n", result);

    return 0;
}

int greatestCommon(int a, int b)
{
    int gcd, i, largerNum;

    if (a > b)
    {
        largerNum = a;
    }
    else
    {
        largerNum = b;
    }

    for (i = 1; i < largerNum; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

float absolute(float a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}

int squareRoot(int a)
{
    if (a < 0)
    {
        printf("Cannot calculate the value of a negative number.\n");
        return -1;
    }
    float result;
    result = sqrt(a);
    return result;
}