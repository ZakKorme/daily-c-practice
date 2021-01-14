#include <stdio.h>

int main()
{
    printf("The size of int: %lu\n", sizeof(int));
    printf("The size of char: %lu\n", sizeof(char));
    printf("The size of long: %lu\n", sizeof(long));
    printf("The size of long long: %lu\n", sizeof(long long));
    printf("The size of double: %lu\n", sizeof(double));
    printf("The size of long double: %lu\n", sizeof(long double));
    return 0;
}