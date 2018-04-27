#include <stdio.h>

#define PI 3.1416

int main()
{
    float radius, area;
        radius = 10.12;
        area = PI * (radius * radius);

    printf("Area: %0.4f\n",area);
    return 0;
}
