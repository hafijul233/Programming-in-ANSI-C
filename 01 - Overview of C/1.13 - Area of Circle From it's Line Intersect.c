#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()
{
    int x1, y1, x2, y2;
    float diameter, area;

    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 6;

    diameter = sqrt(pow((x2-x1),2)+pow((x2-x1),2));
        printf("Circle Diameter: %0.4f\n", diameter);

        area = PI * ((diameter * diameter)/4.0);
            printf("Area of that Circle: %0.4f\n", area);
    return 0;
}
