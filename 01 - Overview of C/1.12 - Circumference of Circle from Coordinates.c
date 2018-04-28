#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()
{
    int x1, y1, x2, y2;
    float radius, circumference;

    x1 = 0;
    y1 = 0;
    x2 = 4;
    y2 = 5;

    radius = sqrt(pow((x2-x1),2)+pow((x2-x1),2));
        printf("Circle Radius: %0.4f\n", radius);

        circumference= 2 * PI * radius;
            printf("Circumference of that area: %0.4f\n", circumference);
    return 0;
}
