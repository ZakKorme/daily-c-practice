#include <stdio.h>

int main()
{
    double width, height, perimeter, area;

    width = 32.3;
    height = 15.3;

    perimeter = (height + width) * 2;
    area = width * height;

    printf("Perimeter: %g\n", perimeter);
    printf("Area: %g\n", area);
    printf("Width: %g\n", width);
    printf("Height: %g\n", height);

    return 0;
}