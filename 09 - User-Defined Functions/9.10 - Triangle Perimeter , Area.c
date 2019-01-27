#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double perimeter(float a, float b, float c);
double area(float a, float b, float c);

int main()
{
    int choice;
    float a, b, c;
    double pere, are;

    printf("Enter Three Sides of Triangle(a, b, c): ");
    scanf("%f %f %f",&a, &b,&c);

    printf("Choose From Option\n");
    printf("1 - Perimeter\n");
    printf("2 - Area\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        pere = perimeter(a, b ,c);
        printf("Perimeter of the Triangle: %lf\n",pere);
    }

    else if(choice == 2){
        are = area(a, b ,c);
        printf("Area of the Triangle: %lf\n",are);
    }

    else {
        printf("Wrong Input. Try again!!!");
    }
    return 0;
}

double perimeter(float a, float b, float c)
{
    double s;
    s = a+b+c;
    return s;

}

double area(float a, float b, float c)
{
    double s,are;
    s = (a+b+c)/2;
    are = sqrt(s*(s-a)*(s-b)*(s-c));
    return are;
}
