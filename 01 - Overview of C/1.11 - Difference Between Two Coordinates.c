#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;
    float distance;

    x1 = 10;
    y1 = 12;
    x2 = 20;
    y2 = 25;

    distance = sqrt(pow((x2-x1),2)+pow((x2-x1),2));
        printf("Differnce between two points is: %f\n",distance);
    return 0;
}
