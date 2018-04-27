#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float s, area;

    a = 1;
    b = 2;
    c = 3;

    s = (a+b+c)/2.0;
    area = sqrt(s)*sqrt(s-a)*sqrt(s-b)*sqrt(s-c);
        printf("Area of Triangle: %f",area);

    return 0;
}
