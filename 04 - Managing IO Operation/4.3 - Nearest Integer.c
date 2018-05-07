#include <stdio.h>
#include <math.h>

int main()
{
  float number, diff;
  int beforedot,nearest;

    printf("Enter a Fraction Number: ");
      scanf("%f", &number);

      beforedot = (int)number;
      diff = number - beforedot;

      if(diff <= 0.50)nearest = floor(number);

      else nearest = ceil(number);

    printf("Nearest Integer: %d\n",nearest);

    return 0;
}
