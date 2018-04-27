#include <stdio.h>


int main()
{
    float cel, far;

    cel = 100;
    far = ((9*cel)/5) + 32;
    printf("%0.2f* Celsius to %0.2f* Farhrenheit\n",cel,far);


    far = 100;
    cel = (5*(far -32))/9;
    printf("%0.2f* Fahrenheit to %0.2f* Celsius\n",cel,far);

    return 0;
}
