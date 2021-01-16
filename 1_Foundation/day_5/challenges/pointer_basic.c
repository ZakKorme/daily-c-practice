#include <stdio.h>

int main()
{
    int number = 89;
    int *pNumber = &number;

    printf("Address of Pointer: %p\n", &pNumber);
    printf("Value of Pointer: %p\n", pNumber);
    printf("Value of what the Pointer is pointing to: %d\n", *pNumber);

    return 0;
}