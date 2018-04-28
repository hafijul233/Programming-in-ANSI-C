#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s, area ;

    a = 10.12;
    b = 20.24;
    c = 45.36;

    s = a+b+c/2.0;
    area = sqrt(s)*sqrt(s - a)*sqrt(s - b)*sqrt(s - c);
        printf("Area of Triangle: %0.4f",area);

    return 0;
}
