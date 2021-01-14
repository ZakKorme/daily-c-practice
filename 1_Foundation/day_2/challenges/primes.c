#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i;
    int j;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    //Hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (i = 5; i <= 100; i += 2)
    {
        isPrime = true;
        for (j = 1; isPrime && i / primes[j] >= primes[j]; ++j)
            if (i % primes[j] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = i;
            ++primeIndex;
        }
    }

    for (i = 0; i < primeIndex; ++i)
    {
        if (primes[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n", primes[i]);
        }
    }
    return 0;
}